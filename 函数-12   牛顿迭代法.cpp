#include<stdio.h>
#include<math.h>
int main()
{
    double solut(double,double,double,double );//����ԭ������
    double a,b,c,d;

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("%.2f",solut(a,b,c,d));
    return 0;
}
 
double solut(double a,double b,double c,double d)
{
    double x=1,x0;

    do
    {
        x0=x;
        x=x0-(((a*x+b)*x+c)*x+d)/((3*a*x+2*b)*x+c);
    }
    while(fabs(x-x0)>=1e-5);//Ϊ��xn+1��xn֮��ľ��룬������ľ������޽ӽ���0ʱ����ʱ������Ҫ��ĸ�x*�����ȡx*�����Ϊ�������Ƿ��ַ����ڸõ��������x��Ľ���Ϊx*����ʱx��x0֮��ľ���Ϊ�㡣
    
	return x;
}