# 練習問題3.1 オブジェクトの代入

## 1. プログラムの誤り

オブジェクトxはcl1クラスのインスタンス、
オブジェクトyはcl2クラスのインスタンスである。
xにyを代入しようとしているが、それぞれ型が異なるため代入できない。


## 3. キューを格納するメモリを動的に割り当てた場合、キューを別のキューに代入してはいけない理由

キューを格納するメモリを動的に割り当てた場合、
キューを別のキューに代入すると、メモリを指し示すポインタもコピーされる。
すると、代入されるキューが元々指していたメモリへの参照が消え、
そのメモリはまったく解放されなくなる。
また、あるキューを操作したとき、別のキューの指す内容も同時に変化してしまう。
これらのキューのメモリを解放するときには、一方が解放済みだと、
もう一方を解放するときにメモリが2度解放されてしまう。

こういった問題が起こるため、代入してはいけない。
