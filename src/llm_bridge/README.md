llm_bridge
====================

Welcome to this LLM chatbot example! It uses the OpenAI REST API to bridge your
ROS 2 application with an LLM. That might include a local server like `ollama`
or a cloud-based service like ChatGPT.

What are the next steps?

## Prerequisites

If you want to use a local server, you need to install eg `ollama`:

- install `ollama`: https://ollama.com/download
- download a LLM model. For instance: `ollama pull llama3.2:1b`
- start `ollama` as a server: `ollama server`

> Note: you can configure `ollama` to [start at startup](https://github.com/ollama/ollama/blob/main/docs/linux.md#adding-ollama-as-a-startup-service-recommended).

If you want to use eg ChatGPT, you need to generate an API key. See
https://platform.openai.com/docs/quickstart

## Compile and install llm_bridge

You need a ROS 2 environment to compile the template.

You can for instance use PAL Robotics public 'tutorials' Docker image:

```
> docker pull palrobotics/public-tutorials-alum-devel
> docker run -it --name ros2_sandbox \
             -v <path to your workspace>:/home/user/exchange/ws \
             palrobotics/public-tutorials-alum-devel bash
```

Then, simply run:

```
> cd /home/user/exchange/ws
> colcon build
> source install/setup.bash
```

You can now start the bridge with:

```
> ros2 launch llm_bridge llm_bridge.launch.py
```

## Testing

You can test the application from the terminal by publishing some input speech, and monitoring the
`/intents` topic for results.

In a second terminal, run:

```
ros2 topic echo /intents
```

> Note: you can open a new terminal in the same Docker image with:
> ```
> docker exec -it ros2_sandbox bash
> ```

Then (from a third terminal) let's pretend that a voice is heard by the robot:

```
ros2 topic pub -1 /humans/voices/tracked hri_msgs/msg/IdsList "ids: ['test_speaker']"
```

Then:

```
ros2 topic pub -1 /humans/voices/test_speaker/speech hri_msgs/msg/LiveSpeech "final: 'hello robot, what can you do for me?'"
```

You should now see intents being published, based on what the LLM chatbot has recognised.

## Customizing the bridge

The bridge's behaviour can be customize via two main means: parameters, and code improvements.

### Custom prompt

The prompt used by the bridge is configure with the `system_prompt` parameter (see `config/00-defaults.yml`).

You can modify it directly in `config/00-defaults.yml` (in that case, you need to re-install the node
after each modification), or you can provide a parameter override, located by default in `$HOME/.pal/config`:

Create the following file:

```
> mkdir -p $HOME/.pal/config
> nano $HOME/.pal/config/custom_llm_prompt.yml
```

And copy-paste the following:

```
/llm_bridge:
  ros__parameters:
    server_url: 'http://localhost:11434' # URL of the LLM server
    model: llama3.2:1b # model (or model family) name
    api_key: '' # API key (for eg ChatGPT)
    system_prompt: |
        This is a new custom prompt. Modify it as you want.

        You can also use the template slots {action_list}, {environment} and
        {person_id} that will be replaced at runtime.
```

The main advantage of the override is that you do not need to re-install the
node. Simply stop and start it again to use the new prompt.

> Note: you can also change here the LLM model and server URL if you
> wish.
>
> For instance, to use ChatGPT, you might want to set `server_url` to
> `https://api.openai.com` and `model` to `gpt-4o-mini`. Do not forget to
> also set your `api_key`.

### Extend the template code

The generated template is using a pretty simple approach to extract intents from the
user input.

Check `llm_bridge/node_impl.py` to see how this is done, and implement your own
techniques.
