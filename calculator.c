#include <stdio.h>

int main(void)
{
    double a, b, result;
    int op;

    printf("===== 简易计算器 =====\n");
    printf("1.加法  2.减法  3.乘法  4.除法  5.取余  0.退出\n");

    while (1)
    {
        printf("\n请输入要进行的操作编号: ");
        scanf("%d", &op);

        if (op == 0)
        {
            printf("感谢使用，再见！\n");
            break;
        }

        if (op < 0 || op > 5)
        {
            printf("输入编号无效，请重新输入！\n");
            continue;
        }

        printf("请输入第一个数字: ");
        scanf("%lf", &a);
        printf("请输入第二个数字: ");
        scanf("%lf", &b);

        switch (op)
        {
            case 1:
                result = a + b;
                printf("结果: %.2lf + %.2lf = %.2lf\n", a, b, result);
                break;
            case 2:
                result = a - b;
                printf("结果: %.2lf - %.2lf = %.2lf\n", a, b, result);
                break;
            case 3:
                result = a * b;
                printf("结果: %.2lf × %.2lf = %.2lf\n", a, b, result);
                break;
            case 4:
                if (b == 0)
                {
                    printf("错误：除数不能为 0！\n");
                }
                else
                {
                    result = a / b;
                    printf("结果: %.2lf ÷ %.2lf = %.2lf\n", a, b, result);
                }
                break;
            case 5:
                if ((long)b == 0)
                {
                    printf("错误：取余的除数不能为 0！\n");
                }
                else
                {
                    printf("结果: %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
                }
                break;
        }
    }

    return 0;
}
