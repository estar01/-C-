#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//第一天
//void print(char va, int d) {
//
//	//if (va >= 'a' && va <= 'z') {
//	for (int i = 1; i <= d; i++) {
//		printf("%c", va + ((i + 26) % 26));
//		//}
//	}
//}
//
////第二天,复制字符串
//void copy(char* a, char* b) {
//	char* p = a;
//	int count = 1;
//	while (*p) {
//		if (count == 3) {
//			*b = *p;
//			b++;
//			*b = ' ';
//			count = 1;
//		}
//		else {
//			count++;
//			*b = *p;
//		}
//		p++;
//		b++;
//	}
//	*b = 0;
//}
//
////第三天
//void transform(char * w) {
//	int i = 1;
//	char* p = w;
//	while (*p != 0) {
//		if (i == 1) {
//			if (*p <= 'z' && *p >= 'a') {
//				*p = *p -'a' + 'A';
//			}
//			i = 0;
//		}
//		else {
//			i = 1;
//		}
//		p++;
//	}
//	*p = 0;
//}

//p6
struct student {
	int number;
	char name[80];
	double math;
	double english;
	double chinese;
};
void change(struct student * p) {
	p->number = 2;
	strcpy(p->name, "muzi");
	p->math = 60;
	p->english = 60;
	p->chinese = 60;
}

//p7
void fun(int arr[], int* len, int x) {
	int count = 0;
	for (int i = 0; i < *len; i++) {
		if (arr[i] != x) {
			arr[count] = arr[i];
			count++;
		}
	}
	*len = count;
}

void reverse(int arr[], int s, int e) {
	while (s < e) {
		int t = *(arr + s);
		arr[s] = arr[e];
		arr[e] = t;
		s++;
		e--;
	}
}
//p8
void f8(int arr[], int len, int d) {
	reverse(arr, 0, d-1);
	reverse(arr, d, len - 1);
	reverse(arr, 0, len - 1);
}

//p9
static struct save {
	int n;
	int res;
};

int p9(int num) {
	static struct save s = { 5,120 };
	if (num >= s.n) {
		for (int i = s.n+1; i <= num; i++) {
			s.res = s.res * i;
		}
	}
	else {
		s.res = 1;
		for (int i = 2; i <= num; i++) {
			s.res = s.res * i;
		}
	}
	return s.res;
}

//p10
int p10(int arr[]) {
	int count = 0;
	for (int i = 100; i < 999; i++) {
		int x = i / 100;
		int y = (i % 100) / 10;
		int z = i % 10;
		if ((x * x * x) + (y * y * y) + (z * z * z) == i) {
			arr[count] = i;
			count++;
		}
	}
	return count;
}

//p11
int p11(int x) {
	int count = 0;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			count += i;
		}
	}
	return count;
}
//p13
void p13(int num) {
	int c0 = 0;
	int c1 = 0;
	while (num > 0) {
		int x = num % 10;
		num /= 10;
		if (x == 0) {
			c0++;
		}
		else if (x == 1) {
			c1++;
		}
	}
	printf("%d %d", c0, c1);
}
//p14
void p14(float a) {
	printf("%f",(int)(a * 100 + 0.5) / 100.0);
}

//p15
float p15(int a) {
	float res = 0.0;
	for (int i = 1; i <= a; i++) {
		int x = 2 * i - 1;
		int y = 2 * i + 1;
		float z = (2 * i) * (2 * i)*1.0;
		res += (x * y) / z;
	}
	return res;
}

//p16
int my_isalpha(char c) {
	if ('a' <= c && c <= 'z') return -1;
	if ('A' <= c && c <= 'Z') return 1;
	return 0;
}
char a(char c) {
	int res = my_isalpha(c);
	if (res == 1) return '*';
	if (res == -1)return '#';
	return '?';
}

//p17

//获取阶乘
int get(int n) {
	if (n == 1) return 1;
	return n * get(n - 1);
}

float p17(int n) {
	float res = 1.0;
	for (int i = 1; i <= n; i++) {
		int x = get(i);
		res += 1.0 / x;
	}
	return res;
}

//p18
int p18(int n) {
	int a = 0;
	while (n > 0) {
		int x = n % 10;
		printf("%d ", x);
		if (x % 2 == 0) {
			a = a * 10 + x;
		}
		n /= 10;
	}
	int res = 0;
	return a;
}

//p19
void p19(char* s) {
	printf("p19\n");
	int index = 0;
	int i=0;
	char* w = s;
	char min = 'A';
	while (*(w+i) != 0) {
		if (*(w+i) > min) {
			min = *(w+i);
			index = i;
		}
		i++;
	}

	char va = *(s + index);
	for (int i = index; i > 0; i--) {
		*(s + i) = *(s + i - 1);
	}
	*s = va;
}

//p20
int p20(int x[], int e, int* sum,int len) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (x[i] % e == 0) {
			count++;
		}
		else {
			*sum += x[i];
		}
	}
	return count;
}
int main() {

	//第一天，打印字符
	//int va;
	//int d;
	//scanf("%c", &va);
	//scanf("%d", &d);
	//print(va, d);

	//第二天，复制字符串
	//char a[80];
	//gets(a);
	//char b [80];
	//copy(a, b);
	//puts(a);
	//puts(b);

	//第三天,转换字符串,,将奇数位小写字母改为大写
	//char ss[80];
	//gets(ss);
	//transform(ss);
	//puts(ss);
	//return 0;

	//第四天 p6
	//struct student s = { 1,"小李",84,85,94 };
	//printf("%d %s %.2f %.2f %.2f\n", s.number, s.name, s.math, s.english, s.chinese);
	//change(&s);
	//printf("%d %s %.2f %.2f %.2f",s.number,s.name,s.math,s.english,s.chinese);

	//第五天 P7
	//int arr[] = { 1,2,5,1,2,4,1,2 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//fun(arr, &len, 1);
	//for (int i = 0; i < len; i++) {
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");
	//printf("%d\n", len);

	//第六天 P8
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int d = 3;
	//f8( arr,  len,  d);
	//for (int i = 0; i < len; i++) {
	//	printf("%d ", arr[i]);
	//}

	//p9
	//int num = 4;
	//int res = p9(num);
	//printf("%d", res);

	//p10
	//int arr[899];
	//int count = p10(arr);
	//printf("%d\n", count);
	//for (int i = 0; i < count; i++) {
	//	printf("%d ", arr[i]);
	//}

	//获取每一位数字
	//int n = 4591;
	//int a[] = { 0,0,0,0,0 };
	//count = 1;
	//while (n > 0) {
	//	int x = n % 10*count;
	//	int i = count-1;
	//	printf("%d ",x);
	//	n = n / 10;
	//}
	//printf("\n");


	//p11
	//int x = p11(856);
	//printf("%d\n", x);

	//p12
	//p13(120110);

	//float a;
	//scanf("%f", &a);
	//p14(a);

	//p15
	//int a;
	//scanf("%d请输入数字，例如10，9.612558", &a);
	//float s = p15(a);
	//printf("%f\n", s);

	//p16
	//char num;
	//scanf("%c", &num);
	//printf("%c\n", num);
	//char res = a(num);
	//printf("%c\n", res);

	//int n;
	//scanf("%d", &n);
	//float res = p17(n);
	//printf("%f\n", res);

	//int n;
	//scanf("%d", &n);
	//int res = p18(n);
	//printf("%d\n", res);

	//char arr[] = "JSFASUmFHWEmfbje";
	//printf("%s\n", arr);
	//p19(arr);
	//printf("%s", arr);

int x[] = { 1,7,8,6,10 }, e = 3, count, sum=0;
int len = sizeof(x) / sizeof(x[0]);
count = p20(x, e, &sum,len);
printf("count = %d ,sum = %d\n", count, sum);
}