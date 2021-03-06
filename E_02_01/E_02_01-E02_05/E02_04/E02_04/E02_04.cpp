/*正の整数値を読み込んで、それが5で割り切れれば「その値は5で割り切れます。」と表示し、
そうでなければ「その値は5で割り切れません。」と表示するプログラムを作成せよ。
＊正でない値を読み込んだ場合は、「正でない値が入力されました。」と表示すること。
*/
#include<iostream>

int main() {
	//整数値を入力する変数を用意する。
	int integerPlusNumber;
	//整数値を入力する。
	std::cin >> integerPlusNumber;

	//入力された値が0と負の数だった場合、正でない値が読み込まれたことを出力する。
	if (integerPlusNumber <= 0) {
		//正でないことを出力する
		std::cout << "正でない値が入力されました。";
	//入力された値が正の場合のみ5で割る処理を行う。
	}else{
		//入力された値を5で割って余りが0の場合、割り切れたことを出力する。
		if (integerPlusNumber % 5 == 0) {
			//5で割り切れることを出力する
			std::cout << "その値は5で割り切れます。";			
		//入力された値を5で割って余りがある場合、割り切れないことを出力する。
		}else {
			//5で割り切れないことを出力する
			std::cout << "その値は5で割り切れません。";
		}
	}
}