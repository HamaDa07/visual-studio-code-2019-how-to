#include <stdio.h>
int main(void)
{
    /*・1 行目には、株を売買する日数を表す整数 N、株の売買条件を表す整数
    c_1, c_2 がこの順で半角スペース区切りで与えられます。
    ・続く N 行のうちの i 行目 (1 ≦ i ≦ N) には、i 日目の株価を表す整数 p_i が与えられます。
    ・入力は合計で N + 1 行となり、入力値最終行の末尾に改行が 1 つ入ります。
    ・株価が c_1 円以下の場合、1 株買う
    ・株価が c_2 円以上の場合、持ち株「を」すべて売る
    ・株価が c_1 円、c_2 円の間の場合は、何もしない
    ・N 日目には、上記を行わず持ち株をすべて売る*/

    /*100  	100	    120	    130  105 株
    1    	2   	0    	0    0　　持ち株
-   110 	-210 	30	    30   30　　利益

//1days 5 110 120  
110 100 120 130 105
出力例1
30

入力例2
3 100 200 
80 80 30
出力例2
-100*/

    int day = 0;                    //株を売買する日
    int money_1 = 0, money_2 = 0;   //株価x円の時
    int buy_kabu = 0;               //買う株＋持っている株
    int i = 0, j = 0, kabu_day = 0; //初期化用の式、ｘ日目の株価
    int profit = 0;                 //利益

    printf("N日目,株科の式２つ");
    scanf("%d"
          "%d"
          "%d",
          &day, &money_1, &money_2); //N、株の売買条件を表す整数,c_1,c_2

    for (int i = 0; i < day; i++)
    {
       
            if (i == day - 1)
            {   //buy_kabuに問題あり
                scanf("%d",&kabu_day);
                profit = profit + (kabu_day * buy_kabu); //今持っている利益+X日目の株価＊今持っている株の個数
                buy_kabu = 0;                            //株を全部売る
                printf("%d"
                       "%d\n",
                       profit, buy_kabu);
                printf("%d\n",kabu_day);

            }
            else
            {
                kabu_day = 0;
                printf("株価を入力");
                scanf("%d", &kabu_day);
                if (kabu_day < money_2)
                {
                    buy_kabu += 1;             //株を一個買う
                    profit += (kabu_day * -1); //株価の分,利益を差し引く
                    printf("%d\n"
                           "%d\n",
                           profit, buy_kabu);
                }
                else if (money_1 <= kabu_day)
                {
                    profit = profit + (kabu_day * buy_kabu); //今持っている利益+X日目の株価＊今持っている株の個数
                    buy_kabu = 0;
                    printf("%d\n"
                           "%d\n",
                           profit, buy_kabu); //株を全部売る
                }

                else 
                {
                }
                printf("%d\n", profit);
            }
        }
    }
