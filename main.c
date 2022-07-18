#include <stdio.h>
#include <stdlib.h>

void main()
{

 	//Demander à l'utilisateur de saisir les éléments de la matrice A(Lire la matrice A);
 	float a[10][10],l[10][10],u[10][10],b[10],x[10],y[10];
 	int i,j,k,n;
    //Demander  l'utilisateur de saisir la taille de la Matrice A;
 	printf("\nEntrez la taille de la matrice A:\n");
 	scanf("%d",&n);

 	//Demander à l'utilisateur de saisir les éléments de la matrice A(Lire la matrice A);
 	printf("\nEntrez les elements de la matrice A ligne par ligne:\n");
 	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f",&a[i][j]);
        }
 	}
    //Demander à l'utilisateur de saisir le vecteur b(Lire le vecteur b);
    printf("\nEntrez le vecteur b:\n");
    for(i=0;i<n;i++){
        scanf("%f",&b[i]);
    }
	//Afficher la matrice A ainsi entrer par l'utilisateur;
    printf("\nLa matrice A que vous avez precedemment entree est la suivante: \n");
    for(i=0;i<n;i++)
       {
            for(j=0;j<n;j++)
            printf("%.1f ",a[i][j]);
 			printf(" \n");
        }
    //Afficher le vecteur b precedemment entree par l'utilisateur;
    printf("\nLe vecteur b que vous avez precedemment entree est le suivant: \n");
    for(i=0;i<n;i++)
       {
            printf("%.1f ",b[i]);
 			printf(" \n");
        }
    //Faire la décomposition LU de la matrice a;
         for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            l[i][j]=a[i][j];
            for(k=0;k<j;k++)
            {
                l[i][j]=l[i][j]-l[i][k]*u[k][j];
            }
            l[i][j]=l[i][j]/u[j][j];
        }

        for(j=i;j<n;j++)
        {
            u[i][j]=a[i][j];
            for(k=0;k<i;k++)
            {
                u[i][j]=u[i][j]-l[i][k]*u[k][j];
            }
        }

    }
    for(i=0;i<n;i++)
    {
        l[i][i]=1;
    }
        //Trouver la solution Y de l'équation ly=b ;
        for(i=0;i<n;i++)
        {
             y[i]=0;
            x[i]=0;
         }
        y[0]=b[0];
        for(i=0;i<n;i++)
        {
            y[i]=b[i];
            for(k=0;k<i;k++)
            {
                y[i]=y[i]-l[i][k]*y[k];

            }
        }
        //Trouver la solution X de l'équation ux=y ;
        for(i=(n-1);i>=0;i--)
        {
            x[i]=y[i];
            for(k=i+1;k<n;k++)
            {
                x[i]=x[i]-u[i][k]*x[k];
            }
            x[i] =x[i]/u[i][i];
        }
    printf("\n La matrice L est la suivante: \n");
    printf("\n\n[L]: \n");
    for(i=0;i<n;i++)
       {
            for(j=0;j<n;j++)
            printf("%.1f ",l[i][j]);
 			printf(" \n");
        }
    printf("\n La matrice U est la suivante: \n");
    printf("\n\n[U]: \n");
     for(i=0;i<n;i++)
       {
            for(j=0;j<n;j++)
            printf("%.1f ",u[i][j]);
 			printf(" \n");
        }
     //Afficher la solution Y de l'équation ly=b ;
    printf("\n La solution Y de l'equation ly=b est la suivante: \n");
    printf("\n\n[Y]: \n");
 		for(i=0;i<n;i++)
            printf("%.1f ",y[i]);
            printf(" \n");
    //Afficher la solution X de l'équation ux=y qui est aussi la solution du système d'équation linéaire;
    printf("\n La solution X du systeme d'inequation est la suivante: \n");
    printf("\n\n[X]: \n");
 		for(i=0;i<n;i++)
            printf("%.1f ",x[i]);
            printf(" \n");
}
