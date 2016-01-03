# Composite pattern

内包しているものと、されているものが共通のクラスとして扱える。  
自分の親クラスと、クラスのメンバとして持っているクラスが同じ。

`composite -> component -> component -> component -> ...`

という感じで再帰的に扱えるようになる。  

- `add` と `remove` が必ずないといけないのかは分からないが、composite パターンを適応したい時には多分、自然と必要になってくるメソッドかもしれない。
- 木構造を保つ必要がある。参照が循環すると無限ループになるから。
- 振るまいを分けたい場合には、 `component` を継承したクラスを分ければいい。
  - かならず `composite` か `leaf` のどちらかになるのかはわからないが、`component` を内包しているか、どうかだけの違いなのかもしれない。

![](http://www.techscore.com/page_attachments/0000/0119/composite3.gif)

via [techscore - composite パターン](http://www.techscore.com/tech/DesignPattern/Composite.html/)

# Reference

- http://www.techscore.com/tech/DesignPattern/Composite.html/
- https://ja.wikipedia.org/wiki/Composite_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3

