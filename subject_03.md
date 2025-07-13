# C++ - モジュール 03

## 継承

**バージョン: 7.1**

---

## 目次

* [I. はじめに](#i-はじめに)
* [II. 一般ルール](#ii-一般ルール)
* [III. 演習00: Aaaaand... OPEN!](#iii-演習00-aaaand-open)
* [IV. 演習01: Serena, my love!](#iv-演習01-serena-my-love)
* [V. 演習02: Repetitive work](#v-演習02-repetitive-work)
* [VI. 演習03: Now it’s weird!](#vi-演習03-now-its-weird)
* [VII. 提出とピア評価](#vii-提出とピア評価)

---

## I. はじめに

C++ は、C プログラミング言語の拡張として Bjarne Stroustrup によって作られた汎用プログラミング言語です。別名「C with Classes」（出典: Wikipedia）。

このモジュールの目的は、オブジェクト指向プログラミング（OOP）を紹介することです。これは、あなたの C++ の旅の出発点です。OOP を学ぶには多くの言語が推奨されますが、私たちはあなたの旧友 C に由来する C++ を選びました。この言語は複雑なため、シンプルに保つためにコードは **C++98** 規格に準拠します。

現代の C++ が多くの面で異なることは認識しています。したがって、熟練の C++ 開発者を目指すなら、42 Common Core 修了後に自分で深掘りする必要があります。

---

## II. 一般ルール

### コンパイル

* `c++` と `-Wall -Wextra -Werror` フラグでコードをコンパイルすること。
* `-std=c++98` フラグを追加してもコンパイルできること。

### フォーマットと命名規則

* 演習ディレクトリ名: `ex00`, `ex01`, ..., `exn`
* ファイル、クラス、関数、メンバ関数、属性の名前は指示に従って命名。
* クラス名: `UpperCamelCase`。クラスのコードを含むファイル名も同様。

    * 例: `BrickWall` クラス → `BrickWall.hpp` / `BrickWall.cpp`
* 特に指示がない限り、すべての出力メッセージは **改行で終わる** 必要があります。

### スタイル

* Norminette は不要。好きなコーディングスタイルで構いません。
* ただし、**可読性のあるコード** を心がけましょう。読めないコードは評価できません。

### 使用可能／禁止事項

* C ではなく C++ を使うこと。
* 標準ライブラリの使用は基本的に可能。
* **C++11以降、Boost、外部ライブラリは禁止**。
* 禁止関数: `*printf()`, `*alloc()`, `free()` など → 使用すると **即 0点**。
* `using namespace` と `friend` キーワードは禁止（明記されていない限り）。
* **STL（vector, list, map, algorithmなど）** の使用はモジュール08・09のみ許可。

### 設計の要件

* `new` でメモリを確保したら、メモリリークに注意。
* モジュール02〜09では、**正統派カノニカル形（Orthodox Canonical Form）** を使用。
* **ヘッダファイル内に関数実装を書くと即0点**（テンプレート除く）。
* 各ヘッダは単独で使えるようにする。依存関係は自前でインクルードする。
* **インクルードガードがない場合、即0点。**

### 注意事項

* コードを分割したい場合は追加ファイルの作成可。ただし提出物に含めること。
* 説明文が短くても、**例に隠れた要件**があるので注意。
* モジュール全体を最初に読んでから始めましょう。

> By Odin, by Thor! 脳を使え！

### Makefile のルール

C の Makefile ルールと同様に従ってください（Norm 参照）。

クラスを多く実装する必要があります。面倒に思えるかもしれませんが、お気に入りのエディタでスクリプト化すれば効率的です。

---

## III. 演習00: Aaaaand... OPEN!

* ディレクトリ: `ex00/`
* 提出物: `Makefile`, `main.cpp`, `ClapTrap.{h,hpp}`, `ClapTrap.cpp`
* 禁止関数: なし

### 課題内容

まず、`ClapTrap` クラスを実装してください。以下の **private 属性** を持ち、初期値は以下のとおり：

* `name`：コンストラクタ引数
* `hit points`：10（体力）
* `energy points`：10
* `attack damage`：0

### 必須のパブリック関数

```cpp
void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
```

* `attack()`：対象に `<attack damage>` のダメージを与える。
* `beRepaired()`：`<amount>` だけ HP 回復。
* 攻撃／修復：それぞれ **1エネルギー** 消費。
* HP または EP が 0 の場合、行動できない。

各関数で **何が起きたかを表示** すること。

例：

```
ClapTrap <name> attacks <target>, causing <damage> points of damage!
```

コンストラクタ／デストラクタも呼び出しを表示すること。

独自のテストを作成・提出し、動作確認を行うこと。

---

## IV. 演習01: Serena, my love!

* ディレクトリ: `ex01/`
* 提出物: 前の演習ファイル + `ScavTrap.{h,hpp}`, `ScavTrap.cpp`
* 禁止関数: なし

### 内容

* `ScavTrap` クラスを作成。`ClapTrap` を継承。
* コンストラクタ／デストラクタ／`attack()` は異なるメッセージを出力。
* **継承チェーンの正しい表示**が必要（親 → 子の順でコンストラクタ、逆順でデストラクタ）。

属性は以下に更新：

* `name`：引数
* `hit points`：100
* `energy points`：50
* `attack damage`：20

### 特別な機能

```cpp
void guardGate();
```

出力：ゲートキーパーモードに入った旨のメッセージ。

---

## V. 演習02: Repetitive work

* ディレクトリ: `ex02/`
* 提出物: 前の演習ファイル + `FragTrap.{h,hpp}`, `FragTrap.cpp`
* 禁止関数: なし

### 内容

`FragTrap` クラスを実装し、`ClapTrap` を継承。

* コンストラクタ／デストラクタのメッセージは `ScavTrap` と異なるものに。
* 継承チェーンを明確に。

属性：

* `name`：引数
* `hit points`：100
* `energy points`：100
* `attack damage`：30

### 特別な機能

```cpp
void highFivesGuys(void);
```

→ ポジティブなハイタッチをリクエストする出力。

---

## VI. 演習03: Now it’s weird!

* ディレクトリ: `ex03/`
* 提出物: 前の演習ファイル + `DiamondTrap.{h,hpp}`, `DiamondTrap.cpp`
* 禁止関数: なし

### 内容

`DiamondTrap` クラスを作成し、`FragTrap` と `ScavTrap` の**多重継承**。

#### 属性：

* `name`：コンストラクタ引数（※ `ClapTrap::name` とは別名で同名変数）
* `ClapTrap::name`：`<引数> + "_clap_name"` にする
* `hit points`：`FragTrap` 由来
* `energy points`：`ScavTrap` 由来
* `attack damage`：`FragTrap` 由来
* `attack()`：`ScavTrap` 由来

### 特別な機能

```cpp
void whoAmI();
```

→ 自分の `name` と `ClapTrap::name` を表示。

### 備考

* `ClapTrap` のインスタンスは 1 回だけ生成されること。
* `-Wshadow` および `-Wno-shadow` フラグについて調べるとよい。

> このモジュールは Exercise 03 をスキップしても合格可能です。

---

## VII. 提出とピア評価

* 通常どおり Git リポジトリに提出。
* リポジトリ内の内容のみが評価対象。
* ディレクトリ名・ファイル名を正確に！