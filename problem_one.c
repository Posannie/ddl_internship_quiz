int simpleArraySum(int n, int ar_size, int* ar) 
{ int sum = 0; 
int i = 0; 
while (i < n) 
{ sum += ar[i]; 
i += 1; } 
return sum;

}

int main() 
{ int n; scanf("%i", &n); 
int *ar = malloc(sizeof(int) * n); 
for(int ar_i = 0; 
ar_i < n; ar_i++)
{ scanf("%i",&ar[ar_i]);
} 
int result = simpleArraySum(n, n, ar); 
printf("%d\n", result); 
return 0; 
}
