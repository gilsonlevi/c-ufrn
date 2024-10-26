int main()
{
	float nota1;
	float nota2;
	float media;

	printf("Digite nota 1: ");
	scanf("%f", &nota1);

	printf("Digite nota 2: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2)/2;

	if(media >= 7.0) {
		printf("O aluno está aprovado com nota %.2f", media);
	} else {
		printf("O aluno está reprovado com nota %.2f", media);
	}

	return 0;
}