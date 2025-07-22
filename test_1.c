----------------------------------------------------
1
int temp;
void swap(int *a, int *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}
----------------------------------------------------
2
bubble_sort(int arr[], int size)
{
	int i, j, temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int array[]={1, 4, 22, 14, 54};
bubble_sort(array, sizeof(array)/sizeof(int));
----------------------------------------------------
3
//1+2+...n
int recursive_1(int n)
{
	if(n==1)
		return 1;
	else
		return (n + recursive_1(n-1));
}

//1*2*3....*n
recursive_2()
{
	if(n==1)
		return 1;
	else
		return (n * recursive_2(n-1));
}

rerecursive_1(5);
rerecursive_2(5);
----------------------------------------------------
4
void modify_str(char s[], int n, char c)
{
	int i = 0;
	char *p = s;
	while(*p!='\0')
	{
		if(i>n){
			*p = c;
		}
		p++;
		i++;
	}
}

char buf[]="abcd1234";
modify_str(buf,3 ,'a');
----------------------------------------------------
5
int byte_swap16(uint16_t a)
{
	return ((a<<8) | (a>>8));
}

byte_swap16(0x1234);
----------------------------------------------------
6
reverse_string(char s[])
{
	int i, j;
	char ch;
	for(i=0, j=strlen(s)-1 ;i<j; i++, j--)
	{
		ch = s[i];
		s[i] = s[i+1];
		s[i+1] = ch;
	}
}

char s[]="abcdef1234";
reverse_string(s);
----------------------------------------------------
7
reverse_integer_array(int arr[], int n)
{
	int i, j, temp;
	for(i=0,j<n-1;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}

int a[]={1, 3, 5, 7, 2};
reverse_integer_array(a, sizeof(a)/sizeof(int));
----------------------------------------------------
8
//123 -> 321
revert_integer(int a)
{
	int res=0;
	do{
		res = res*10 + (a%10);
	}while(a/=10);
}

revert_integer(123);
----------------------------------------------------
9
find_max(int array[], int len)
{
	int max, i;
	max = 0;
	for(i=0;i<len;i++)
	{
		if(array[i]>max){
			max = array[i];
		}
	}
}

int arr[]={1, 3, 5, 2, 6}
find_max(arr, sizeof(arr)/sizeof(int));
----------------------------------------------------
10
strcat(char *dest, const char *src)
{
	while(*dest!='\0')
	{
		dest++;
	}

	while(*src!='\0')
	{
		*dest++ = *src++;
	}
}

char s[]="1234"
strcat(s, "abcdef");
----------------------------------------------------
11
int mystrlen(const char *s)
{
	char *start_addr=s;
	char *p=s;
	while(*p++!='\0');
	return (p-start_addr);
}

mystrlen("abcdef123");
----------------------------------------------------
12
mystrcpy(char dest[], const char *src)
{
	int i = 0;
	char *p=src;
	while(*p!='\0')
	{
		dest[i++]=*p++;
	}
}

char s[100]={0};
mystrcpy(s, "abcdefg123");
----------------------------------------------------
13
alloc_100()
{
	int *p=(int *)malloc(100*sizeof(int));

	while(100--)
	{
		*p++ = 0;
	}
}
----------------------------------------------------
14
void *memset(void *buf, int c, int len)
{
	char *p=(cahr *)buf;
	while(len--)
	{
		*p++ = (char)c;
	}
	return buf;
}

char buf[100];
memset(buf, 0, sizeof(buf)/sizeof(char));
----------------------------------------------------
15
detect(char *s)
{
	char *p=s;
	int digit=0, letter=0, others=0;

	while(*p!='\0')
	{
		if((*p>=0) && (*p<=9))
			digit++;
		else if((*p>='a')&&(*p<='z')||(*p>='A')&&(*p<='Z'))
			letter++;
		else
			others++;
		p++;
	}
}

detect("abcd1233*-");
----------------------------------------------------
16
memcpy(void *dest, const void *src, int n)
{
	(char *)pto=(char *)dest;
	(char *)pfrom=(char *)src;
	
	//pto		pto+n		pfrom
	//pfrom		pfrom+n		pto
	if((pto+n < pfrom) || (pfrom+n < pto))
	{
		while(n--)
		{
			*pto++ = *pfrom++;
		}
	}
}


char dest[]={0};
char *src="adddd"
memcpy(dest, src, strlen(src));
----------------------------------------------------
17
//-1234 -> "4321-" -> "-1234"
itoa(int n)
{
	int sign = 1;
	int v;
	if(n<0){
		sign = -1;
		v = n * (-1);
	}

	//1234
	char buf[100]={0};
	do{
		buf[i++] = '0' + (v%10);
	}while(v/=10);
	//"4321"

	if(sign<0){
		buf[i++]='-';
	}
	buf[i]='\0';
	//"4321-"

	char c;
	int i, j;
	for(i=0,j=strlen(buf)-1;i<j;i++, j--){
		c = buf[i];
		buf[i] = buf[j];
		buf[j] = c;
	}
	//"-1234"
}
----------------------------------------------------
18
//"-1234" -> // -1234
atoi(char *s)
{
	int res = 0;
	int sign = 1;
	if(*s=='-'){
		sign = -1;
	}
	s++;
	while(*s!='\0')
	{
		res = res*10 + (*s-'0');
		s++;
	}
	return (sign * res);
}
----------------------------------------------------
19
----------------------------------------------------
20
