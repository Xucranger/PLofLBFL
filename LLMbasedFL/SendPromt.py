import requests
import json
from openai import OpenAI
from zhipuai import ZhipuAI

keysboard = {
    "gpt-3.5-turbo":"sk-m8FYRkwtaGbZ9ah92c8d2f235eAc4fFbBaC31bDb0b4e9f46",
    "gpt-4o":"sk-snt9ufdbzzjhStyc76AeA7835fD04039B207703599Fd8a7c",
    "gpt-4":"sk-DjODLS8rhRzoaW2VPpDYcgTSwhkRh0QCUDbKILVgFD8zglHE",
    "o1-mini":"sk-WN3NRR2cyUTYMSvW381c9fE33044470aA9AeFe2a1518D7F1",
    "o1-preview":"sk-RoIzixeRR36VkpUD1d75A6396b1f468a9fFb54D95bAbB74a",
    "deepseek-chat":"sk-Bc3VOPVbuKKt7T16JpTusecCwTplTs6hyIG4gSzwGU0LoanK",
    "deepseek-ai/DeepSeek-R1":"sk-onppqnxupqbmmevbjeegxvaexosztksdhebjgrqmvdndfrdr",
    "llama-3.1-8b":"sk-DSA4OR9AoNjWtomSvW0wvYJ50k9io82LRSmZxDtfv7cGqV7r"
}

def send_prompt_zhipu_form(prompt,model):
    client = ZhipuAI(api_key="c0bfb61d177c472292eb1f25e1840c4b.216igfsJaVfQQJA5")
    # print(mykey)
    if model == "chatGlm3":
       model = "ChatGLM3-6B"
    if model == "chatGlm4":
        model = "glm-4-9b"
    completion = client.chat.completions.create(
        model=model,
        messages=[
            {"role": "system", "content": "You are a helpful assistant."},
            {"role": "user", "content": prompt}
        ],
        top_p= 0.7,
        temperature= 0.95,
        max_tokens=1024,
        stream=False
    )

    # print(completion.choices[0].message.content)
    # 将结果保存在txt中
    response_txt = completion.choices[0].message.content
    # with open(savelocation, 'w') as file:
    #     file.write(response_txt)

    return response_txt

def send_request_and_save_to_file():
    url = "http://127.0.0.1:6006"
    headers = {'Content-Type': 'application/json'}
    prompt = ""
    with open('prompt.txt', 'r', encoding='utf-8') as file:
        # 读取文件内容并保存到字符串中
        prompt = file.read()

    data = {"prompt": prompt, "history": []}

    response = requests.post(url, json=data, headers=headers)
    response_data = json.loads(response.text)
    print(response_data)
    print(response_data["history"][1]["content"])
    # Writing response to a file
    with open('response.txt', 'w') as file:
        file.write(response_data["history"][1]["content"])

    return "Response saved to response.txt"

def send_request_and_return(prompt):
    url = "http://127.0.0.1:8000"
    headers = {'Content-Type': 'application/json'}
    # prompt = ""
    # with open('prompt.txt', 'r', encoding='utf-8') as file:
    #     # 读取文件内容并保存到字符串中
    #     prompt = file.read()

    # data = {"你是谁"}
    data = {"prompt": prompt, "history": [],"max_tokens": 2048}

    response = requests.post(url, json=data, headers=headers)
    response_data = json.loads(response.text)
    # print(response_data)
    # print(response_data["history"][1]["content"])
    # Writing response to a file
    # with open('response.txt', 'w') as file:
    #     file.write(response_data["history"][1]["content"])

    return response_data["history"][1]["content"]

def send_prompt_openai_form(prompt,model):
    client = OpenAI(
        base_url="http://127.0.0.1:8611/v1",
        api_key="666"
    )
    # print(mykey)
    if model == "chatGlm3":
        model = "chatglm3"
    if model == "code-llama":
        model =  "CodeLlama"
    completion = client.chat.completions.create(
        model=model,  # 将模型更改
        messages=[
            {"role": "system", "content": "You are a helpful assistant."},
            {"role": "user", "content": prompt}
        ]
    )

    # print(completion.choices[0].message.content)
    # 将结果保存在txt中
    response_txt = completion.choices[0].message.content
    # with open(savelocation, 'w') as file:
    #     file.write(response_txt)
    print(response_txt)
    return response_txt

def send_prompt_openai_gpt(prompt,model):
    # with open('key.txt', 'r', encoding='utf-8') as file:
    #     # 读取文件内容并保存到字符串中
    #     mykey = file.read()
    myurl= "https://yunwu.ai/v1"
    if model == "llama3":
        model = "llama-3.1-8b"
    if model == "deepseekV3":
        model = "deepseek-chat"
        # myurl = "https://api.siliconflow.cn/v1"
    if model == "deepseekR1":
        model = "deepseek-ai/DeepSeek-R1"
        myurl = "https://api.siliconflow.cn/v1"
    mykey =keysboard[model]
    client = OpenAI(
        # your openai url
        base_url=myurl,
        # your key
        api_key=mykey,
        # request_timeout=600s
    )



    rolelist =["gpt-3.5-turbo","gpt-4o","gpt-4"]
    if model in rolelist:
        messages=[
            {"role": "system", "content": "You are a helpful assistant."},
            {"role": "user", "content": prompt}]
    else:
        messages=[
            {"role": "user", "content": prompt}
    ]
    # print(mykey)
    completion = client.chat.completions.create(
        model=model,  # 将模型更改
        messages=messages
    )

    # print(completion.choices[0].message.content)
    # 将结果保存在txt中
    response_txt = completion.choices[0].message.content
    # with open(savelocation, 'w') as file:
    #     file.write(response_txt)
    print(response_txt)
    return response_txt

# Automatically call send_request_and_save_to_file() when the script is executed
if __name__ == "__main__":
    # model="gpt-3.5-turbo",
    # model = "gpt-4",  \
    response = send_prompt_openai_form("你的训练集截止到几月几号","chatGlm4")
    i=0
