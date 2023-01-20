## snippets_generater
スニペット用コード自動生成スクリプト  
Contest/Lib以下にあるディレクトリごとにスニペットファイルを作成し、ファイルごとにスニペットを作成する  
スニペットを作成したい部分を以下のように```<lib><lib/>```で囲む
```<prefix>```はスニペットを呼び出す際の名前をしていする
```go
//<lib>
//<prefix> div
func div(x int, y int) int {
	return x / y
}

//<lib/>
```
