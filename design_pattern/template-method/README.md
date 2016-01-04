# Template method pattern

オーバーライドして一部の処理を注入的に書きかえる。
いつくかのメソッドは一つの手順として決まった順番で実行される。
メソッドの内容を子クラスが決めることができる。親クラスにテンプレートがあり、その内容は子クラスが定める。
一定のパターンがある処理とかに使うかも

![](http://www.techscore.com/page_attachments/0000/0193/template2.gif)

via [techscore - template method パターン](http://www.techscore.com/tech/DesignPattern/TemplateMethod.html/)

# Compile

g++ main.cpp Temp.cpp Impl.cpp
