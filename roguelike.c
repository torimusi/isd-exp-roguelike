//実験用VBAで動くローグライク
// .cファイルはこれ一つのみ、開発時は複数に分けていいかも
//ヘッダファイル使用可
// <studio.h>などは使用不可（？）

/* メイン関数 */
int main(void) {
    //おまじない
    hword *ptr = (hword *)INIT;
    *ptr = 0x0F03;

    //描画、その他の関数の出力を用いて
    while(1) {

    }

    return 0;
}