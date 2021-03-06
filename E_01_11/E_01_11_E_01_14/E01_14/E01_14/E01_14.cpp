/*
キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラムを生成せよ。
キーボードから読み込んだ値が100であれば、95〜105の整数値を表示すること。
*/

#include<iostream> //標準入出力を提供するライブラリ
#include<ctime>    //Cスタイルの時間の標準ライブラリが含まれている
#include<cstdlib>  //疑似乱数を生成するrand() srand()が含まれているライブラリ
using namespace std;

int main()
{
	srand(time(NULL));            //rand()の種を設定する
	int randomInteger;               //-5〜5が入る変数
	int enteredInteger;               //入力される整数を入れる変数

	 //0〜10の乱数から5を引くことにより-5〜5の整数を作る
	randomInteger = (rand() % 11) - 5; 
	cout << "整数値:";

	cin >> enteredInteger;            //整数を入力する。

	//入力された変数に-5〜5を足し入力値から±5の乱数を生成することを実現する
	cout << "その値の±5の乱数を生成しました。それは" << enteredInteger + randomInteger << "です。";
}