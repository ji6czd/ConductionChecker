# M5Stick-Cを使った導通チェッカー

とりあえず、音で導通がわかるようにしてみたチェッカー。

## ハードウェアの準備

* M5Stick-C Plusを、液晶を正面に向けて持つ
* HAT接続用のピンの一番右（グランド）と、右から3番め（G26）にジャンパーワイヤーを挿入する
* 電源を入れる
* ジャンパーの反対側を接触させてみる
* 音が出るかな？

## 注意事項

* 絶対に電圧をかけないでください、おそらく破損します
* 静電気には注意して

## その他

コピーコンストラクタ作ってませんけど、大丈夫っぽいです。

バグがあったらこっそり、いや、プルリクででも教えてくださあい。

## なんでこんな物作ったかって？

ブレッドボードのどこがショートしてるか知りたいってんで、かんたんにテスターの代わりになるものを作りました。なんでもいいですけど、ブラインドが使えるテスターってまじでないんですよお。秋葉原に行けばデジタルテスターなんて性能を問わなければ千円以下で手に入るのにねえ。
