#include <ncurses.h>

int main(void) {
    // ncurses 初期化
    initscr();

    // カーソルを非表示
    curs_set(0);

    // 入力文字を画面に表示しない
    noecho();

    // Enter不要で入力取得
    cbreak();

    // 真っ黒な画面を表示
    clear();
    refresh();

    // 何かキーが押されるまで待機
    getch();

    // ncurses 終了
    endwin();

    return 0;
}
