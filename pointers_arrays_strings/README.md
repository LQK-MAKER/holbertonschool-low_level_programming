
Programmation C
Inclure les fichiers d’en-tête
stdio.h− Fournit des fonctions d’entrée et de sortie comme printf et scanf.
#include <stdio.h>
stdlib.h − Contient des fonctions impliquant l’allocation de mémoire, la fonction rand et d’autres fonctions utilitaires.
#include <stdlib.h>
math.h − Comprend des fonctions mathématiques comme sqrt, sin, cos, etc.
#include <math.h>
string.h − Inclut des fonctions pour manipuler des chaînes, telles que strcpy, strlen, etc.
#include <string.h>
ctype.h − Fonctions pour tester et mapper des caractères, comme isalpha, isdigit, etc.
#include <ctype.h>
stdbool.h − Définit le type de données booléennes et les valeurs true et false.
#include <stdbool.h>
time.h − Contient des fonctions pour travailler avec la date et l’heure.
#include <time.h>
limits.h − Définit diverses limites spécifiques à l’implémentation sur les types d’entiers.
#include <limits.h>

Déclarations globales en C
Les déclarations globales sont facultatives :

int globalVariable;
void sampleFunction();

Déclarez les variables globales et les fonctions qui seront utilisées dans les différentes parties du programme. Jetez un coup d’œil à l’exemple suivant −

#include <stdio.h>

// Global variable declaration
int globalVariable;

int main()
{
// Rest of the program
return 0;
}

Fonction principale
Chaque programme C doit avoir une fonction principale. C’est le point d’entrée du programme. Jetez un coup d’œil à l’exemple suivant −

int main() {
float radius = 5.0;
float area = PI radius radius;

printf("Area of the circle: %f\n", area);
return 0;
}

Fonctions en C
Définissez d’autres fonctions si nécessaire. La fonction principale peut appeler ces fonctions. Jetez un coup d’œil à l’exemple suivant :

#include <stdio.h>

// Global function declaration
void samplefunction();

int main() {
// Programming statements
return 0;
}

// Global function definition
void samplefunction () {
// Function programming statements implementation
}

Commentaires dans un programme C
Outre les éléments de programmation d’un programme C tels que les variables, les structures, les boucles, les fonctions, etc., le code peut avoir un certain texte à l’intérieur de "/ .. /" reconnu comme commentaires. Ces commentaires sont ignorés par le compilateur.

L’insertion de commentaires dans le code s’avère souvent utile pour documenter le programme, et pour comprendre et déboguer la logique de programmation et les erreurs.

Si le symbole /* n’a pas de symbole */ correspondant, le compilateur signale une erreur : « Commentaire non terminé ».

Un texte entre /* et */ est appelé commentaire de style C et est utilisé pour insérer des commentaires sur plusieurs lignes.

Compilation d’un programme C
Une séquence d’instructions binaires composée de 1 et 0 bits est appelée code machine. Les langages de programmation de haut niveau tels que C, C++, Java, etc. sont constitués de mots-clés plus proches des langages humains tels que l’anglais. Par conséquent, un programme écrit en C (ou tout autre langage de haut niveau) doit être converti en son code machine équivalent. Ce processus s’appelle la compilation.

Notez que le code machine est spécifique à l’architecture matérielle et au système d’exploitation. En d’autres termes, le code machine d’un certain programme C compilé sur un ordinateur avec le système d’exploitation Windows ne sera pas compatible avec un autre ordinateur utilisant le système d’exploitation Linux. Par conséquent, nous devons utiliser le compilateur adapté au système d’exploitation cible.

Compilation

Le projet GNU est un projet de logiciel libre de Richard Stallman qui permet aux développeurs d’avoir accès gratuitement à des outils puissants.

Le compilateur gcc prend en charge divers langages de programmation, y compris C. Pour l’utiliser, nous devons installer sa version compatible avec l’ordinateur cible.

Le processus de compilation comporte quatre étapes différentes :

Prétraitement
Compilation
Assemblage
Enchaînement
Le schéma suivant illustre le processus de compilation.

Compilation Process

C - Mots-clés
Les mots-clés sont des mots prédéfinis qui ont une signification particulière dans le compilateur et qui ne peuvent pas être utilisés à d’autres fins. Selon la norme C99, le langage C comporte 32 mots-clés. Les mots-clés ne peuvent pas être utilisés comme identifiants.

Le tableau suivant contient la liste de tous les mots-clés (mots réservés) disponibles dans le langage C :

|auto|double|int|struct|
|break|else|long|switch|
|case|enum|register|typedef|
|char|extern|return|union|
|continue|for|signed|void|
|do|if|static|while|
|default|goto|sizeof|volatile|
|const|float|short|unsigned|

Principaux types C Mots-clés
Ces mots-clés sont utilisés pour la déclaration des variables. Le C est un langage de type statique, la variable à utiliser doit être déclarée. Les variables en C sont déclarées avec les mots-clés suivants :

Int	Déclare une variable entière
long	Déclare une variable entière longue
short	Déclare une variable entière courte
signed	Déclare une variable signée
double	Déclare une variable en double précision
char	Déclare une variable de caractère
float	Déclare une variable à virgule flottante
Unsigned	Déclare une variable non signée
void	Spécifie un type de retour void
Mots-clés de type C définis par l’utilisateur
Le langage C vous permet de définir de nouveaux types de données selon les besoins. Le type défini par l’utilisateur comporte un ou plusieurs éléments de type primaire.

Les mots-clés suivants sont fournis pour les types de données définis par l’utilisateur :

Struct	Déclare un type de structure
typedef	Crée un nouveau type de données
union	Déclare un type d’union
enum	Déclare un type d’énumération
Types de stockage C Mots-clés
L’ensemble de mots-clés suivant est appelé spécificateurs de stockage. Ils indiquent l’emplacement où dans la mémoire les variables sont stockées. Le type de stockage par défaut d’une variable est auto, bien que vous puissiez demander au compilateur de former une variable avec des propriétés de stockage spécifiques.

auto	Spécifie la classe de stockage automatique
Extern	Déclare une variable ou une fonction
static	Spécifie la classe de stockage statique
registrer	Spécifie la classe de stockage de registre
Conditionnels C Mots-clés
L’ensemble de mots-clés suivant vous aide à mettre une logique conditionnelle dans le programme. La logique conditionnelle exprimée avec les mots-clés if et else fournit deux actions alternatives pour une condition. Pour l’embranchement multidirectionnel, utilisez la construction switch – case. En C, l’opération de saut dans un assembleur est implémentée par le mot-clé goto.

goto	Passe à une déclaration étiquetée
if	Démarre une instruction if
else	S’exécute lorsque la condition if est false
case	Étiquette une instruction dans un commutateur
switch	Démarre une instruction switch
default	Spécifie l’instruction default dans switch
Boucles et contrôle de boucle Mots-clés C
La répétition ou l’itération est un aspect essentiel de l’algorithme. C fournit différentes alternatives pour former une boucle, et des mots-clés pour contrôler le comportement de la boucle. Chacun des mots-clés vous permet de former une boucle de caractéristiques et d’utilisations différentes.

for	Démarre une boucle for
do	Démarre une boucle do-while
while	démarre une boucle while
continue	Saute une itération d’une boucle
break	Termine une boucle ou une instruction switch
Autres mots-clés C
Les mots-clés divers suivants sont également extrêmement importants :

const	Spécifie une valeur constante
sizeof	Détermine la taille d’un type de données
Volatile	compilateur que la valeur de la variable peut changer à tout moment
Spécificateurs de format d’entrée utilisateur
Les spécificateurs de format suivants sont utilisés dans la chaîne de format :

Spécificateur de format	Type
%c	Personnage
%d	Entier signé
%f	Valeurs flottantes
%i	Entier non signé
%l ou %ld ou %li	Long
%lf	Double
%Lf	Double long
%lu	Unsigned int ou unsigned long
%lli ou %lld	Long, long
%llu	Non signé long long
Saisie de caractères
Le spécificateur de format %c lit un seul caractère à partir du clavier. Cependant, nous devons donner un espace vide avant %c dans la chaîne de format. En effet, le spécificateur de conversion %c n’ignore pas automatiquement les espaces de début.

S’il y a un saut de ligne égaré dans le flux d’entrée (d’une entrée précédente, par exemple), l’appel scanf() le consommera immédiatement.

scanf(" %c", &c);

L’espace vide dans la chaîne de format indique à scanf d’ignorer l’espace de début, et le premier caractère non espace sera lu avec le spécificateur de conversion %c.

C - Types de données
Les types de données en C font référence à un système étendu utilisé pour déclarer des variables ou des fonctions de différents types. Le type d’une variable détermine l’espace qu’elle occupe dans le stockage et la façon dont le modèle de bits stocké est interprété. Dans ce chapitre, nous allons découvrir les types de données en C. Un concept connexe est celui des « variables », qui font référence à l’emplacement adressable dans la mémoire du processeur. Les données capturées via différents périphériques d’entrée sont stockées dans la mémoire de l’ordinateur. Un nom symbolique peut être attribué à l’emplacement de stockage appelé nom de variable.

Le C est un langage à typage statique. Le nom de la variable ainsi que le type de données qu’elle a l’intention de stocker doivent être explicitement déclarés avant de l’utiliser réellement.

Le C est également un langage fortement typé, ce qui signifie que la conversion automatique ou implicite d’un type de données à un autre n’est pas autorisée.

Les types en C peuvent être classés comme suit :

Sr.No.	Types et description
1	Types de base

Ce sont des types arithmétiques et sont ensuite classés en : (a) types entiers et (b) types à virgule flottante.
2	Types énumérés

Ce sont encore des types arithmétiques et ils sont utilisés pour définir des variables qui ne peuvent attribuer que certaines valeurs entières discrètes dans tout le programme.
3	Le type void

Le spécificateur de type void indique qu’aucune valeur n’est disponible.
4	Types dérivés

Ils incluent (a) les types de pointeur, (b) les types de tableau, (c) les types de structure, (d) les types d’union et (e) les types de fonction.
Les types de tableau et les types de structure sont appelés collectivement types d’agrégation. Le type d’une fonction spécifie le type de la valeur de retour de la fonction. Nous verrons les types de base dans la section suivante, tandis que d’autres types seront couverts dans les chapitres à venir.

Types de données entiers en C
Le tableau suivant fournit les détails des types d’entiers standard avec leurs tailles de stockage et leurs plages de valeurs :

Type	Taille de stockage	Fourchette de valeurs
char	1 octet	-128 à 127 ou 0 à 255
unsigned char	1 octet	0 à 255
signed char	1 octet	-128 à 127
Int	2 ou 4 octets	-32 768 à 32 767 ou -2 147 483 648 à 2 147 483 647
unsigned int	2 ou 4 octets	0 à 65 535 ou 0 à 4 294 967 295
short	2 octets	-32 768 à 32 767
unsigned short	2 octets	De 0 à 65 535
long	8 octets	-9223372036854775808 à 9223372036854775807
unsigned long	8 octets	0 à 18446744073709551615
Pour obtenir la taille exacte d’un type ou d’une variable sur une plate-forme particulière, vous pouvez utiliser l’opérateur sizeof. L’expression sizeof(type) donne la taille de stockage de l’objet ou du type en octets.

Le type de données void en C
Le type void spécifie qu’aucune valeur n’est disponible. Il est utilisé dans trois types de situations :

Sr.No	Types et description
1	La fonction est renvoyée sous la forme void

Il existe différentes fonctions en C qui ne renvoient aucune valeur ou vous pouvez dire qu’elles renvoient void. Une fonction sans valeur de retour a le type de retour void. Par exemple, void exit (int status) ;
2	Arguments de fonction comme void

Il existe différentes fonctions en C qui n’acceptent aucun paramètre. Une fonction sans paramètre peut accepter un void. Par exemple, int rand(void) ;
3	Pointeurs pour annuler

Un pointeur de type void * représente l’adresse d’un objet, mais pas son type. Par exemple, une fonction d’allocation de mémoire void *malloc( size_t size ) ; renvoie un pointeur vers void qui peut être converti en n’importe quel type de données.
Pointeurs en C
Qu’est-ce qu’un pointeur en C ?
Le pointeur C est le type de données dérivé qui est utilisé pour stocker l’adresse d’une autre variable et peut également être utilisé pour accéder et manipuler les données de la variable stockées à cet emplacement. Les pointeurs sont considérés comme des types de données dérivés.

À l’aide de pointeurs, vous pouvez accéder aux données situées dans la mémoire et les modifier, transmettre efficacement les données entre les fonctions et créer des structures de données dynamiques telles que des listes liées, des arborescences et des graphiques.

Déclaration du pointeur
Pour déclarer un pointeur, utilisez l’opérateur de déréférencement (*) suivi du type de données.

Syntaxe
La forme générale d’une déclaration de variable de pointeur est −

type *var-name;

Ici, type est le type de base du pointeur ; il doit s’agir d’un type de données C valide et var-name est le nom de la variable de pointeur. L’astérisque * utilisé pour déclarer un pointeur est le même astérisque que celui utilisé pour la multiplication. Toutefois, dans cette instruction, l’astérisque est utilisé pour désigner une variable en tant que pointeur.

Exemple de déclarations de variables de pointeur valides
Jetez un coup d’œil à certaines des déclarations de pointeur valides −

int ip; / pointer to an integer /
double dp; / pointer to a double /
float fp; / pointer to a float /
char ch / pointer to a character /

Le type de données réel de la valeur de tous les pointeurs, qu’il s’agisse d’un entier, d’un flottant, d’un caractère ou autre, est le même, un long nombre hexadécimal qui représente une adresse mémoire. La seule différence entre les pointeurs de différents types de données est le type de données de la variable ou de la constante vers laquelle le pointeur pointe.

Syntaxe
Voici la syntaxe pour initialiser une variable de pointeur :

pointer_variable = &variable;

Exemple
Voici un exemple d’initialisation de pointeur :

int x = 10;
int *ptr = &x;

Ici, x est une variable entière, ptr est un pointeur entier. Le pointeur ptr est initialisé avec x.

Référencement et déréférencement des pointeurs
Un pointeur fait référence à un emplacement en mémoire. L’obtention de la valeur stockée à cet emplacement est connue sous le nom de déréférencement du pointeur.

En C, il est important de comprendre l’objectif des deux opérateurs suivants dans le contexte du mécanisme du pointeur :

L’opérateur & − Il est également connu sous le nom d'"opérateur d’adresse de ». Il est utilisé pour le référencement, c’est-à-dire la prise de l’adresse d’une variable existante (à l’aide de &) pour définir une variable pointeur.
L’opérateur  − Il est également connu sous le nom d'"opérateur de déréférencement ». Le déréférencement d’un pointeur s’effectue à l’aide de **l’opérateur  pour obtenir la valeur de l’adresse mémoire pointée par le pointeur.
Les pointeurs sont utilisés pour passer des paramètres par référence. Ceci est utile si un programmeur souhaite que les modifications apportées par une fonction à un paramètre soient visibles par l’appelant de la fonction. Ceci est également utile pour retourner plusieurs valeurs à partir d’une fonction.

Comment utiliser les pointeurs ?
Pour utiliser les pointeurs en langage C, vous devez déclarer une variable de pointeur, puis l’initialiser avec l’adresse d’une autre variable, puis vous pouvez l’utiliser en déréférencement pour obtenir et modifier la valeur des variables pointées par le pointeur.

Vous pouvez utiliser des pointeurs avec n’importe quel type de variable telle qu’un entier, un flottant, une chaîne, etc.

Exemple
Dans l’exemple ci-dessous, nous utilisons des pointeurs pour obtenir les valeurs de différents types de variables.

#include <stdio.h>
int main() {
int x = 10;
float y = 1.3f;
char z = 'p';
// Pointer declaration and initialization
int ptr_x = & x;
float ptr_y = & y;
char ptr_z = & z;
// Printing the values
printf("Value of x = %d\n", ptr_x);
printf("Value of y = %f\n", ptr_y);
printf("Value of z = %c\n", ptr_z);
return 0;
}

Sortie
Value of x = 10
Value of y = 1.300000
Value of z = p

Taille d’une variable de pointeur
La mémoire (ou la taille) occupée par une variable de pointeur ne dépend pas du type de la variable vers laquelle elle pointe. La taille d’un pointeur dépend de l’architecture du système.

Exemple
Dans l’exemple ci-dessous, nous affichons la taille de différents types de pointeurs :

#include <stdio.h> int main() {
int x = 10;
float y = 1.3f;
char z = 'p';
// Pointer declaration and initialization
int ptr_x = & x;
float ptr_y = & y;
char * ptr_z = & z;
// Printing the size of pointer variables
printf("Size of integer pointer : %lu\n", sizeof(ptr_x));
printf("Size of float pointer : %lu\n", sizeof(ptr_y));
printf("Size of char pointer : %lu\n", sizeof(ptr_z));
return 0;
}

Sortie
Size of integer pointer : 8
Size of float pointer : 8
Size of char pointer : 8

Exemples de pointeurs C
Pratiquez les exemples suivants pour apprendre le concept des pointeurs :

Exemple 1 : Utilisation de pointeurs en C
L’exemple suivant montre comment vous pouvez utiliser les opérateurs & et * pour effectuer des opérations liées au pointeur en C −

#include <stdio.h> int main(){
int var = 20; / actual variable declaration /
int ip; / pointer variable declaration /
ip = &var; / store address of var in pointer variable/
printf("Address of var variable: %p\n", &var); / address stored in pointer variable /
printf("Address stored in ip variable: %p\n", ip);
/ access the value using the pointer /
printf("Value of ip variable: %d\n", *ip );
return 0;
}

Sortie
Exécuter le code et vérifier sa sortie −

Address of var variable: 0x7ffea76fc63c
Address stored in ip variable: 0x7ffea76fc63c
Value of *ip variable: 20

Exemple : Imprimer la valeur et l’adresse d’un entier
Nous allons déclarer une variable int et afficher sa valeur et son adresse −

#include <stdio.h> int main(){
int var = 100;
printf("Variable: %d \t Address: %p", var, &var);
return 0;
}

Sortie
Exécutez le code et vérifiez sa sortie −

Variable: 100 Address: 0x7ffc62a7b844

Exemple : pointeur entier
Dans cet exemple, l’adresse de var est stockée dans la variable intptr avec l’opérateur &

#include <stdio.h> int main(){
int var = 100;
int *intptr = &var;
printf("Variable: %d \nAddress of Variable: %p \n\n", var, &var);
printf("intptr: %p \nAddress of intptr: %p \n\n", intptr, &intptr);
return 0;
}

Sortie
Exécutez le code et vérifiez sa sortie −

Variable: 100
Address of Variable: 0x7ffdcc25860c

intptr: 0x7ffdcc25860c
Address of intptr: 0x7ffdcc258610

Exemple : Pointeur flottant
Dans cet exemple, nous déclarons une variable « floatptr » de type « float * »

#include <stdio.h> int main(){
float var1 = 10.55;
float floatptr = &var1;
printf("var1: %f \nAddress of var1: %p \n\n",var1, &var1);
printf("floatptr: %p \nAddress of floatptr: %p \n\n", floatptr, &floatptr); printf("var1: %f \nValue at floatptr: %f", var1, floatptr);
return 0;
}

Sortie
var1: 10.550000
Address of var1: 0x7ffc6daeb46c

floatptr: 0x7ffc6daeb46c
Address of floatptr: 0x7ffc6daeb470

Pointeur à pointeur
Nous pouvons avoir une variable de pointeur qui stocke l’adresse d’un autre pointeur lui-même.

Variable de pointeur

Dans la figure ci-dessus, « a » est une variable « int » normale, dont le pointeur est « x ». À son tour, la variable stocke l’adresse « x ».

Notez que « y » est déclaré comme « int * » pour indiquer qu’il s’agit d’un pointeur vers une autre variable de pointeur. Évidemment, « y » renverra l’adresse de « x » et « y » est la valeur de « x » (qui est l’adresse de « a »).

Pour obtenir la valeur de « a » à partir de « y », nous devons utiliser l’expression « y ». Habituellement, « y » sera appelé comme pointeur vers un pointeur**.

Exemple
Jetez un coup d’œil à l’exemple suivant −

#include <stdio.h> int main(){
int var = 10;
int intptr = &var;
int **ptrptr = &intptr;
printf("var: %d \nAddress of var: %d \n\n",var, &var);
printf("inttptr: %d \nAddress of inttptr: %d \n\n", intptr, &intptr);
printf("var: %d \nValue at intptr: %d \n\n", var, intptr);
printf("ptrptr: %d \nAddress of ptrtptr: %d \n\n", ptrptr, &ptrptr); printf("intptr: %d \nValue at ptrptr: %d \n\n", intptr, ptrptr);
printf("var: %d \nintptr: %d \nptrptr: %d", var, *intptr, ptrptr);
return 0;
}

Sortie
Exécutez le code et vérifiez sa sortie −

var: 10
Address of var: 951734452

inttptr: 951734452
Address of inttptr: 951734456

var: 10
Value at intptr: 10

ptrptr: 951734456
Address of ptrtptr: 951734464
intptr: 951734452
Value at ptrptr: 951734452

var: 10
*intptr: 10
**ptrptr: 10

Vous pouvez avoir un pointeur vers un tableau ainsi qu’un type dérivé défini avec struct. Les pointeurs ont des applications importantes. Ils sont utilisés lors de l’appel d’une fonction en passant la référence. Les pointeurs aident également à surmonter la limitation de la capacité d’une fonction à ne renvoyer qu’une seule valeur. Avec les pointeurs, vous pouvez obtenir l’effet de renvoyer plusieurs valeurs ou tableaux.

Arrays en C
Les tableaux en C sont un type de structure de données qui peut stocker une collection séquentielle de taille fixe d’éléments du même type de données. Les tableaux sont utilisés pour stocker une collection de données, mais il est souvent plus utile de considérer un tableau comme une collection de variables du même type.

Qu’est-ce qu’un tableau en C ?
Un tableau en C est une collection d’éléments de données de type similaire. Une ou plusieurs valeurs du même type de données, qui peuvent être des types de données primaires (int, float, char) ou des types définis par l’utilisateur tels que struct ou pointers, peuvent être stockés dans un tableau. En C, le type d’éléments du tableau doit correspondre au type de données du tableau lui-même.

La taille du tableau, également appelée longueur du tableau, doit être spécifiée dans la déclaration elle-même. Une fois déclarée, la taille d’un tableau C ne peut pas être modifiée. Lorsqu’un tableau est déclaré, le compilateur alloue un bloc continu de mémoire nécessaire pour stocker le nombre d’éléments déclaré.

Pourquoi utilise-t-on des tableaux en C ?
Les tableaux sont utilisés pour stocker et manipuler le même type de données.

Supposons que nous voulions stocker les notes de 10 élèves et trouver la moyenne. Nous déclarons 10 variables différentes pour stocker 10 valeurs différentes comme suit :

int a = 50, b = 55, c = 67, . . . ;
float avg = (float)(a + b + c +. . . ) / 10;

Ces variables seront dispersées dans la mémoire sans aucune relation entre elles. Il est important de noter que si nous voulons étendre le problème de trouver la moyenne de 100 élèves (ou plus), il devient alors peu pratique de déclarer autant de variables individuelles.

Les baies offrent une solution compacte et économe en mémoire. Étant donné que les éléments d’un tableau sont stockés dans des emplacements adjacents, nous pouvons facilement accéder à n’importe quel élément en relation avec l’élément actuel. Comme chaque élément a un index, il peut être directement manipulé.

Exemple : Utilisation d’un tableau en C
Pour revenir au problème de l’enregistrement des notes de 10 étudiants et trouver la moyenne, la solution avec l’utilisation du tableau serait −

#include <stdio.h> int main(){
int marks[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};
int i, sum = 0;
float avg;
for (i = 0; i <= 9; i++){ sum += marks[i];
} avg = (float)sum / 10;
printf("Average: %f", avg);
return 0;
}

Sortie

Exécutez le code et vérifiez sa sortie −

Average: 52.000000

Les éléments du tableau sont stockés dans des emplacements de mémoire contigus. Chaque élément est identifié par un indice commençant par « 0 ». L’adresse la plus basse correspond au premier élément et l’adresse la plus élevée au dernier élément.

Arrays[

Explorez nos derniers cours en ligne et acquérez de nouvelles compétences à votre rythme. Inscrivez-vous et devenez un expert certifié pour booster votre carrière.

](https://www.tutorialspoint.com/latest/courses?utm_source=tutorialspoint&utm_medium=tutorials_3p&utm_campaign=internal)

Déclaration d’un tableau en C
Pour déclarer un tableau en C, vous devez spécifier le type des éléments et le nombre d’éléments à y stocker.

Syntaxe pour déclarer un tableau
type arrayName[size];

La « taille » doit être une constante entière supérieure à zéro et son « type » peut être n’importe quel type de données C valide. Il existe différentes façons de déclarer un tableau en C.

Exemple : Déclaration d’un tableau en C
Dans l’exemple suivant, nous déclarons un tableau de 5 entiers et imprimons les index et les valeurs de tous les éléments du tableau −

#include <stdio.h> int main(){
int arr[5]; int i;
for (i = 0; i <= 4; i++)
{ printf("a[%d]: %d\n", i, arr[i]);
}
return 0;
}

Sortie
Exécutez le code et vérifiez sa sortie −

a[0]: -133071639
a[1]: 32767
a[2]: 100
a[3]: 0
a[4]: 4096

Initialisation d’un tableau en C
Au moment de déclarer un tableau, vous pouvez l’initialiser en fournissant l’ensemble des valeurs séparées par des virgules entourées d’accolades {}.

Syntaxe d’initialisation d’un tableau
data_type array_name [size] = {value1, value2, value3, ...};

Exemple d’initialisation d’un tableau
L’exemple suivant illustre l’initialisation d’un tableau d’entiers :

#include <stdio.h> int main() {
int numbers[5] = {10, 20, 30, 40, 50};
int i;
// loop counter // Printing array elements
printf("The array elements are : ");
for (i = 0; i < 5; i++) {
printf("%d ", numbers[i]); }
return 0; }

Sortie

The array elements are : 10 20 30 40 50

Exemple d’initialisation de tous les éléments d’un tableau à 0
Pour initialiser tous les éléments à 0, placez-le entre accolades

#include <stdio.h> int main(){
int arr[5] = {0}
; int i;
for(i = 0; i <= 4; i++){
printf("a[%d]: %d\n", i, arr[i]);
} return 0; }

Sortie

Lorsque vous exécutez ce code, il produira le résultat suivant :

a[0]: 0
a[1]: 0
a[2]: 0
a[3]: 0
a[4]: 0

Exemple d’initialisation partielle d’un tableau
Si la liste de valeurs est inférieure à la taille du tableau, le reste des éléments est initialisé avec « 0 ».

#include <stdio.h> int main(){
int arr[5] = {1,2};
int i;
for(i = 0; i <= 4; i++){
printf("a[%d]: %d\n", i, arr[i]);
} return 0; }

Sortie

Lorsque vous exécutez ce code, il produira le résultat suivant :

a[0]: 1
a[1]: 2
a[2]: 0
a[3]: 0
a[4]: 0

Exemple d’initialisation d’éléments partiels et spécifiques
Si un tableau est partiellement initialisé, vous pouvez spécifier l’élément entre crochets.

#include <stdio.h> int main(){
int a[5] = {1,2, [4] = 4};
int i;
for(i = 0; i <= 4; i++){
printf("a[%d]: %d\n", i, a[i]); }
return 0; }

Sortie

Lors de l’exécution, il produira le résultat suivant −

a[0]: 1
a[1]: 2
a[2]: 0
a[3]: 0
a[4]: 4

Obtention de la taille d’un tableau en C
Le compilateur alloue un bloc continu de mémoire. La taille de la mémoire allouée dépend du type de données de la matrice.

Exemple 1 : Taille d’un tableau d’entiers
Si un tableau entier de 5 éléments est déclaré, la taille du tableau en nombre d’octets serait « sizeof(int) x 5 »

#include <stdio.h> int main(){
int arr[5] = {1, 2, 3, 4, 5};
printf("Size of array: %ld", sizeof(arr));
return 0; }

Sortie

Lors de l’exécution, vous obtiendrez le résultat suivant −

Size of array: 20

L’opérateur sizeof renvoie le nombre d’octets occupés par la variable.

Exemple 2 : Adresse adjacente d’éléments de tableau
La taille de chaque int est de 4 octets. Le compilateur alloue des emplacements adjacents à chaque élément.

#include <stdio.h> int main(){
int a[] = {1, 2, 3, 4, 5};
int i;
for(i = 0; i < 4; i++){
printf("a[%d]: %d \t Address: %d\n", i, a[i], &a[i]);
} return 0; }

Sortie

Exécutez le code et vérifiez sa sortie −

a[0]: 1 Address: 2102703872
a[1]: 2 Address: 2102703876
a[2]: 3 Address: 2102703880
a[3]: 4 Address: 2102703884

Dans ce tableau, chaque élément est de type int. Par conséquent, le 0ème élément occupe les 4 premiers octets 642016 à 19. L’élément de l’indice suivant occupe les 4 octets suivants et ainsi de suite.

Exemple 3 : Tableau de type double
Si nous avons le type de tableau de type double, alors l’élément à chaque indice occupe 8 octets

#include <stdio.h> int main(){
double a[] = {1.1, 2.2, 3.3, 4.4, 5.5};
int i;
for(i = 0; i < 4; i++){ printf("a[%d]: %f \t Address: %ld\n", i, a[i], &a[i]);
} return 0; }

Sortie

Exécutez le code et vérifiez sa sortie −

a[0]: 1.100000 Address: 140720746288624
a[1]: 2.200000 Address: 140720746288632
a[2]: 3.300000 Address: 140720746288640
a[3]: 4.400000 Address: 140720746288648

Exemple 4 : Taille d’un tableau de caractères
La longueur d’une variable « char » est de 1 octet. Par conséquent, la longueur d’un tableau char sera égale à la taille du tableau.

#include <stdio.h> int main(){
char a[] = "Hello";
int i;
for (i=0; i<5; i++){
printf("a[%d]: %c address: %ld\n", i, a[i], &a[i]);
} return 0; }

Sortie

Exécutez le code et vérifiez sa sortie −

a[0]: H address: 6422038
a[1]: e address: 6422039
a[2]: l address: 6422040
a[3]: l address: 6422041
a[4]: o address: 6422042

Accès aux éléments de tableau en C
Chaque élément d’un tableau est identifié par un index d’incrémentation unique, indiquant « 0 ». Pour accéder à l’élément par son index, cela se fait en plaçant l’index de l’élément entre crochets après le nom du tableau.

Les éléments d’un tableau sont accessibles en spécifiant l’index (décalage) de l’élément souhaité entre crochets après le nom du tableau. Par exemple −

double salary = balance[9];

L’instruction ci-dessus prendra le 10ème élément du tableau et attribuera la valeur au « salaire ».

Exemple d’accès aux éléments de tableau en C
L’exemple suivant montre comment utiliser les trois concepts mentionnés ci-dessus, à savoir la déclaration, l’affectation et l’accès aux tableaux.

#include <stdio.h> int main(){
int n[5];/ n is an array of 5 integers /
int i, j; / initialize elements of array n to 0 /
for(i = 0; i < 5; i++)
{ n[i] = i + 100; }
/ output each array element's value /
for(j = 0; j < 5; j++){
printf("n[%d] = %d\n", j, n[j]);
}
return 0; }

Sortie

En exécutant ce code, vous obtiendrez le résultat suivant :

n[0] = 100
n[1] = 101
n[2] = 102
n[3] = 103
n[4] = 104

L’index donne un accès aléatoire aux éléments du tableau. Un tableau peut être constitué de variables struct, de pointeurs et même d’autres tableaux en tant qu’éléments.

En savoir plus sur les matrices C
Les tableaux, étant un concept important en C, nécessitent beaucoup plus d’attention. Les concepts importants suivants liés aux tableaux doivent être clairs pour un programmeur C :

Sr.No	Concept et description
1	Tableaux multidimensionnels

C prend en charge les tableaux multidimensionnels. La forme la plus simple d’un tableau multidimensionnel est le tableau bidimensionnel.
2	Passer des tableaux à des fonctions

Vous pouvez passer à la fonction un pointeur vers un tableau en spécifiant le nom du tableau sans index.
3	Renvoi d’un tableau à partir d’une fonction

C permet à une fonction de renvoyer un tableau.
4	Pointeur vers un tableau

Vous pouvez générer un pointeur vers le premier élément d’un tableau en spécifiant simplement le nom du tableau, sans aucun index.
Pointers vs Arrays
En C, un array n’est PAS un pointeur, les variables que nous déclarons comme des tableaux ne contiennent pas d’adresse mémoire.

Lorsque nous déclarons un tableau, nous utilisons un nom pour y faire référence, mais ce n’est qu’un nom. Les noms de tableau sont des identificateurs qui identifient l’objet du tableau entier. Ce ne sont pas des indications sur quoi que ce soit. C’est pourquoi nous ne pouvons pas changer la valeur d’une 'variable' qui est un tableau.

julien@ubuntu:~/c/$ cat 10-main.c
/**
 * main - You can not modify a 
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[5];
    int b;
    int c[5];

    a = 0; /* nop */
    a = &b; /* nop */
    a = c; /* nop */
    return (0);
}
julien@ubuntu:~/c/ideas_tests$ gcc 10-main.c
10-main.c: In function ‘main’:
10-main.c:12:4: error: assignment to expression with array type
  a = 0; /* nop */
    ^
10-main.c:13:4: error: assignment to expression with array type
  a = &b; /* nop */
    ^
10-main.c:14:4: error: assignment to expression with array type
  a = c; /* nop */
    ^
julien@ubuntu:~/c$ 
Mais, vous pouvez toujours utiliser le nom du tableau dans votre code, et sa valeur sera... l’adresse du premier élément du tableau. Attendre... WAT?

ubuntu@ip-172-31-63-244:~/holbertonschool$ cat 16-main.c
#include <stdio.h>

/**
 * main - An array is not a pointer, but...
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[98]; /* array */

   printf("a: %p\n", a);
   printf("&a[0]: %p\n", &a[0]);
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc 16-main.c -o avsp && ./avsp
a: 0x7fffc211caa0
&a[0]: 0x7fffc211caa0
Alors, que se passe-t-il ici ? Si les tableaux ne sont pas des pointeurs, comment se fait-il que la valeur d’un tableau soit l’adresse du premier élément du même tableau. N’est-ce pas la définition d’un pointeur : « une variable qui contient l’adresse » ? Puits... OUI, il s’agit d’un pointeur, mais la variable a (le tableau) ne l’est PAS. C’est pourquoi :

Lorsque le nom d’un tableau est utilisé dans une expression, le type de tableau est automatiquement converti implicitement en type pointeur-élément dans presque tous les contextes (ce qu’on appelle souvent le « déclin du type de tableau »). Le pointeur résultant est une valeur temporaire complètement indépendante, c’est-à-dire l’adresse du premier élément du tableau.

ubuntu@ip-172-31-63-244:~/holbertonschool$ cat 17-main.c
#include <stdio.h>
void f(int *a);

/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int t[10];

   p = t; /* This works because of the auto implicit conversion to (int *) */
   printf("t: %p\n", t);
   printf("&t[0]: %p\n", &t[0]);
   printf("p: %p\n", p);
   f(t);
   return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @a: address of an integer we need to print
 *
 * Return: Nothing.
 */
void f(int *a)
{
   printf("a: %p\n", a);
   return;
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc 17-main.c && ./a.out
t: 0x7ffd553e7380
&t[0]: 0x7ffd553e7380
p: 0x7ffd553e7380
a: 0x7ffd553e7380
Il y a deux exceptions à cela : lorsque le nom du tableau est un opérande de sizeof ou unary & (address-of), le nom du tableau fait alors référence à l’objet du tableau lui-même.

sizeof

Dans le contexte de sizeof, le nom du tableau fait référence à l’objet du tableau lui-même (composé de tous ses éléments). Ainsi, la taille d’un tableau vous donnera la quantité d’espace mémoire utilisée par tous ses éléments.

ubuntu@ip-172-31-63-244:~/holbertonschool$ cat 14-main.c
#include <stdio.h>

/**
 * main - printing the sizeof an array 
 *
 * Return: Always 0.
 */
int main(void)
{
   int array[10];

   printf("sizeof array: %lu\n", sizeof(array));
   return (0);  
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc -Wall -Werror -Wextra -pedantic -o sizeofarray 14-main.c && ./sizeofarray
sizeof array: 40  
&

Dans le contexte de '&', le nom du tableau fait référence à l’objet du tableau lui-même (composé de tous ses éléments). Ainsi, l’adresse du nom du tableau vous donnera l’adresse de l’ensemble du tableau, qui est la même que l’adresse de son premier élément.

ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ cat 18-main.c
#include <stdio.h>

/**
 * main - prints the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   char b[98];

   printf("b: %p\n", b);
   printf("&b: %p\n", &b);
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ gcc 18-main.c && ./a.out
b: 0x7fff6130ef60
&b: 0x7fff6130ef60
Par conséquent, la valeur de 'b' est la même que la valeur de '&b'. Mais ils n’ont pas le même type :
'b' : dans ce contexte, la règle générale s’applique, donc l’utilisation de 'b' sera évaluée comme l’adresse du premier élément du tableau. Ainsi, 'b' est de type 'char *'
'&b' : dans ce contexte (l’une des deux exceptions à la règle générale), 'b' sera évalué comme l’objet tableau lui-même. Ainsi, 'b' est de type 'char[98]' - un tableau de 98 caractères - puis '&b' est de type 'char (*)[98]', un pointeur vers un tableau de 98 caractères.
C’est important car lorsque nous manipulerons ces deux pointeurs, ils se comporteront différemment, puisque la taille de leur type est différente :

'sizeof' 'b' est '98' (voir ci-dessus)
'sizeof' '&b' vaut 8, (si vous utilisez une machine 64 bits normale) (voir ci-dessous)
ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ cat 19-main.c
#include <stdio.h>

/**
 * main - prints the size of an array and the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   char b[98];

   printf("b: %p\n", b);
   printf("&b: %p\n", &b);
   printf("sizeof(b): %lu\n", sizeof(b));
   printf("sizeof(&b): %lu\n", sizeof(&b));
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ gcc 19-main.c && ./a.out
b: 0x7ffe0b9c62f0
&b: 0x7ffe0b9c62f0
sizeof(b): 98
sizeof(&b): 8
Pointers Arithmetic
Une autre façon d’accéder aux différents éléments d’un tableau, est d’utiliser cette autre notation : '*(var + x)', où 'var' est le nom d’un tableau, et 'x' est le (x+1)ème élément (en commençant à compter les éléments à 0 bien sûr) de ce tableau. Par exemple, si nous déclarons :

int i[10];  
Ensuite, lorsque nous utiliserons 'i' dans le code, 'i[5]' sera le même que '*(i + 5)'. Nous savions déjà que 'i' est évalué comme un pointeur vers le premier élément du tableau, puisque 'i' est un tableau. Mais maintenant, nous savons aussi que 'i + 5' sera évalué comme un pointeur vers le 6ème élément du tableau 'i'.

ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ cat 10-main.c
#include <stdio.h>

/**
 * main - illustrates pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];

   *a = 98; /* same as *(a + 0) */
   *(a + 1) = 198;
   *(a + 2) = 298;
   *(a + 3) = 398;
   *(a + 4) = 498;
   printf("Value of a[0]: %d\n", *a);
   printf("Value of a[1]: %d\n", *(a + 1));
   printf("Value of a[2]: %d\n", *(a + 2));
   printf("Value of a[3]: %d\n", *(a + 3));
   printf("Value of a[4]: %d\n", *(a + 4));
   printf("----------------\n");
   printf("Value of 'a' (also address of a[0]): %p\n", a);
   printf("Address of 'a[1]': %p\n", (a + 1));
   printf("Address of 'a[1]': %p\n", &(*(a + 1)));
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ gcc 10-main.c -o array && ./array
Value of a[0]: 98
Value of a[1]: 198
Value of a[2]: 298
Value of a[3]: 398
Value of a[4]: 498
----------------
Value of 'a' (also address of a[0]): 0x7ffff8f19240
Address of 'a[1]': 0x7ffff8f19244
Address of 'a[1]': 0x7ffff8f19244
Mais attendez une seconde, si la valeur de 'a' est '0x7ffff8f19240', comment se fait-il que 'a + 1' == '0x7ffff8f19244' et non '0x7ffff8f19241' ?
C’est l’arithmétique des pointeurs. L’ordinateur sait que « a » pointe vers un entier. L’ordinateur sait également que la taille d’un entier en mémoire est 'sizeof(int)' octets - dans ce cas 4 octets - et conclut que l’élément suivant de ce type sera stocké 4 octets plus tard en mémoire.

Si cela fonctionne pour les tableaux, qui sont évalués comme des pointeurs dans ce contexte, cela signifie que cette arithmétique fonctionne également pour les pointeurs « normaux ».

ubuntu@ip-172-31-63-244:~/holbertonschool$ cat 20-main.c
#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int a[2];
   int n;

   p = &n;
   printf("p = &n;\np: %p\n", p);
   printf("p + 1: %p\n", p + 1);
   printf("p + 2: %p\n", p + 2);
   printf("p + 10: %p\n", p + 10);
   /* possible since a is evaluated */
   /* as an int * in this context */
   p = a;
   printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc 20-main.c && ./a.out
p = &n;
p: 0x7ffd90a8cd2c
p + 1: 0x7ffd90a8cd30
p + 2: 0x7ffd90a8cd34
p + 10: 0x7ffd90a8cd54
p = a;
p: 0x7ffd90a8cd30
p + 1: 0x7ffd90a8cd34
Essayez de comprendre et de dessiner l’état de la mémoire à chaque étape du programme suivant. Une fois que vous sentez que vous avez tout compris, ajoutez quelques 'printf’s, compilez-le et exécutez-le pour vérifier votre hypothèse.

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   *p = 98;  
   p2 = a + 3;
   *p2 = *p + 1337;
   return (0);
}
Strings
Bien sûr, nous pouvons également créer un tableau de caractères. Cela fonctionnerait exactement de la même manière.

ubuntu@ip-172-31-63-244:~/holbertonschool$ cat 12-main.c
#include <stdio.h>

/**
 * main - Creates an array of chars and prints it
 *
 * Return: Always 0.
 */
int main(void)
{
   char a[9];

   *a = 'H';
   *(a + 1) = 'o';
   *(a + 2) = 'l';
   a[3] = 'b';
   *(a + 4) = 'e';
   a[5] = 'r';
   a[6] = 't';
   a[7] = 'o';
   a[8] = 'n';
   printf("%c%c%c%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3],
              a[4], a[5], a[6], a[7], a[8]);
   return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc -Wall -Werror -Wextra -pedantic -o achar 12-main.c && ./achar
Holberton
ubuntu@ip-172-31-63-244:~/holbertonschool$
In this example, memory looks like this before exiting the program:



Ce serait une façon de stocker des chaînes de caractères, mais ce n’est pas très efficace. Si nous voulions stocker un texte très long, imaginez combien de temps nous passerions à stocker chaque caractère de la chaîne dans notre tableau !
Heureusement, nous pouvons également utiliser du texte entre guillemets doubles '"'.

char a[10] = "Holberton";  
Vous avez probablement remarqué que dans cet exemple, nous avons utilisé un tableau de 10 caractères pour stocker une chaîne de 9 caractères. En effet, en C, les chaînes se terminent par le caractère ''0'' (valeur ascii = 0).

Dans l’exemple ci-dessus, notez que cette instruction copiera en fait la chaîne « Holberton » dans la variable 'a'. Les chaînes ont également des valeurs en C : l’adresse de leur premier caractère en mémoire :

ubuntu@ip-172-31-63-244:~/holbertonschool/curriculum_by_julien/holbertonschool-low_level_programming/pointers$ cat 13-main.c && gcc 13-main.c && ./a.out
#include <stdio.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */
int main(void)
{
   char a[10] = "Holberton";

   printf("%s\n", a);
   printf("Value of the last char of a: %d\n", a[9]);
   printf("Value of a: %p\n", a);
   printf("Value of \"Holberton\": %p\n", "Holberton");
   return (0);
}
Holberton
Value of the last char of a: 0
Value of a: 0x7ffe1a23cc50
Value of "Holberton": 0x400749
Memory would look like:



Comme chaque corde en C se termine par un ''0'', nous n’avons pas besoin de connaître leur taille pour les utiliser. En connaissant l’adresse du premier caractère des chaînes (avec un pointeur vers un caractère), les fonctions C peuvent facilement les imprimer en boucle, un caractère à la fois, jusqu’à ce qu’elles atteignent le caractère '
