import json
import os
import re
from tracemalloc import start


def parse(code: list):
    for i in range(len(code)):
        if re.search('<lib>', code[i]):
            start_idx = i
        elif re.search('<lib/>', code[i]):
            end_idx = i

    if start_idx > end_idx:
        print("error: invalid taggs.")
        exit(1)

    return code[start_idx+1: end_idx]


def gen_snippets(code: list, file_name: str):
    snippets_json = dict()

    if not re.search('<prefix>', code[0]):
        print("error: There is no prefix.")
        exit(1)

    pref = code[0].replace('//', '').strip()
    pref = pref.replace('<prefix>','').strip()
    scope = file_name.split('.')[-1]

    snippets_json[pref] = {"prefix": pref, "scope": scope, "body": code[1:]}

    return snippets_json


def read_files(path: str):

    files = os.listdir(path)
    print(path)

    snippets_jsones = dict()
    for file in files:
        tmp_path = path + '/' + file
        with open(tmp_path, 'r') as f:
            code = parse(f.read().strip().splitlines())
            snippets = gen_snippets(code, file)
            snippets_jsones.update(snippets)

    out_file_path = path + '.code-snippets'
    print(json.dumps(snippets_jsones, indent=4))
    with open(out_file_path, 'w') as f:
        json.dump(snippets_jsones, f, indent=4, ensure_ascii=False)


def main():
    path = "./../Lib"
    files = os.listdir(path)

    for file in files:
        if not os.path.isdir(path + '/' + file):
            continue
        read_files(path + '/' + file)


if __name__ == '__main__':
    main()
