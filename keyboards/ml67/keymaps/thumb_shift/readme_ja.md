# ML67 親指シフト

ミニラの英語配列を使った、日本語親指シフト入力規格の実装。ローマ字入力にマッビングしているため、規格の一部の入力できない記号が無効となっている。

OS全般での作動を想定して作られているため、特定のOSでしか認識されないキー（またはその組み合わせ）は使われていない。親指シフトの単独打鍵は、右親指シフトの変換をスペースとして、左親指シフトの無変換をエンターキーとして出力される。

## 設定

`config.h`で設定できる項目：

- 同時打鍵の制限時間

    ```C
    #define COMBO_TERM 100
    ```

    同時打鍵が失敗判定されるまでの猶予時間。設定しない場合のデフォルトは100ミリ秒となっている。

- 同時打鍵の重なり判定時間

    ```C
    #define OVERLAP_TERM (2 * DEBOUNCE)
    ```

    二つの同時打鍵の最小間隔。二つの同時打鍵がこの間隔より近ければ、最初の同時打鍵は失敗と見做される。設定しない場合のデフォルトはピンの読み取り遅延の二倍となっている。