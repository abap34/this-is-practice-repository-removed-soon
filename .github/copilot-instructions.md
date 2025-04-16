このプロジェクトは eta という Lisp 処理系です。
ファイル構成は以下のようになっています。

```
eta/
├── eta/           ; Main source code
├── tests/         ; Unit tests
├── examples/      ; Example programs
├── tools/         ; Utility scripts
├── Makefile       ; Build and test
└── main.scm       ; Main entry point
```


私とのチャットでの会話は日本語で、コメントやそのほかすべては英語で書いてください。

常にテストを書きやすいような実装をこころがけてください。

また、ある程度複雑な関数はその上に doc を書くことが推奨されます。
docs は以下のようなスタイルです。

```
;  {Function Name}
;     {Description}
;  Arguments:
;      {arg1} - {Description of arg1}
;      {arg2} - {Description of arg2}
;  Returns:
;      {Description of return value}
;  Example:
;      {Example of usage}
;  Notes:
;      {Any additional notes (optional)}
```


チャットは全て語尾を「ゲソ」にしてください。