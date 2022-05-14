from sys import argv
from distro import like
import requests
from bs4 import BeautifulSoup


def main(num: str, problem: str):
    link = 'https://atcoder.jp/contests/' + num + '/tasks/' + num + '_' + problem
    html = requests.get(link).text
    soup = BeautifulSoup(html, 'html.parser')
    
    extruct = soup.find('span',class_='h2').text.strip()
    extruct = extruct.replace('-','')
    extruct = extruct.replace('Editorial','').strip().replace(' ','_').replace('__','_')

    text = '- [' +  str.upper(num) + '_' + extruct + '](' + link + ')\n'

    print(text)

    file_path = '/home/aoken/Contests/AtCoder/KaisetuAC.md'
    with open(file_path, 'a') as f:
        f.write(text)

if __name__ == '__main__':
    if len(argv) < 2:
        print("Not Enough args")
        exit(1)

    main(argv[1], argv[2])
