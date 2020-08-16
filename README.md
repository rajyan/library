# README

## library

競技プログラミング用のライブラリです。  
コピーなどは自由ですが、間違いなどから生じる不利益について一切責任をとりません。

バグや改善点などありましたら、[@unagiunag](https://twitter.com/unagiunag)まで指摘していただけるとありがたいです。

[verifyに使用した問題一覧](verify.md)

## snippet

競技プログラミングの Visual Studio用のスニペットです。  
ライブラリの内容は全てスニペットになっているのに加えて、競技プログラミングでよく使うコードの断片をスニペット化しています。

## autosnippet

libraryの修正・追加のたびにsnippetも変更するのは面倒なので、Git hooksを使ってスニペットの生成を自動化しています。

### autosnippet.sh

スニペットのテンプレートをもとに、cppファイルからVisual Studio用スニペットの作成をする。

### pre-commit

.git/hooksへのsymlinkを張っている。libraryのcppファイルが削除・リネームされたときには対応するsnippetを削除、変更や追加の際にはautosnippet.shを実行してスニペットを生成する。

### post-commit

.git/hooksへのsymlinkを張っている。pre-commitで追加されたsnippetをamend commitする。
