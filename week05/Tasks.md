# Задачи

# Цикли, вложени цикли, едномерни и двумерни масиви

## Палиндром

По дадено естествено число проверете дали то е палиндром.

## Подмножества
От едно множество от цели числа направете всички негови двуелементни подмножества.

## Редица

Нека имаме редица от естествени числа, в която всяко число присъства толкова пъти колкото самото то, тоест редицата 1 2 2 3 3 3 4 4 4 4 и така нататък. По подадено число N изкарайте първите N члена на редицата.

## Мрежа

По дадено число N изкарайте на екрана квадрат от N x N символи #, в който само ъглите са символи +

**Пример:**

Вход:

    4

Изход:

    +##+
    ####
    ####
    +##+

## Положителни и отрицателни части

По дадено число N изкарайте на екрана квадрат от N x N символи, където по главния диагонал стоят нули, над него +, а под него -.

**Пример:**

Вход:

    4

Изход:

    0+++
    -0++
    --0+
    ---0


## Вариации (vars)

По дадени n и k - естествени числа, пресметнете броя вариации на n елемента k-ти клас. Пресмята се по формулата n!/(n-k)!.

**Примери:**

Вход: 12 5

Изход: 95040

Вход: 0 15

Изход: 0

Вход: 0 0

Изход: 1

## Комбинации (nchoosek)

Напишете програма, която по дадени n и k - естествени числа, намира броя комбинации от n елемента k-ти клас. Пресмята се по формулата n!/(k! * (n-k)!).

**Примери:**

Вход: 10 7

Изход: 120

Вход: 5 5

Изход: 1

## Автомобилен компютър *
Всеки автомобил има датчик, който отчита текущата скорост на автомобила. По дадени данни за времето и скоростта, с която се е движил автомобила през това време, намерете пътя, който е изминат и максималното ускорение.

На вход първо получавате число N - броят на точките от време, за които разполагаме с данни. След това се въвеждат два реда с по N положителни дробни числа. Първият ред показва моментът от времето в секунди, а вторият - скоростта на автомобила в съответното време


**Примери:**

Вход:

    0   20    30    50    70    80    90    100
    0   1.1   2.3   3     4     5     7     10     

Изход:

    0.183056 km travelled
    7.93651 m/s^2 max acceleration experienced


## Таблица за умножение (multTable)

Напишете програма, която по дадено естествено число N принтира таблицата за умножение до N.

**Пример:**

Вход: 10

Изход:

	1	2       3       4       5       6       7       8       9       10
	2       4       6       8       10      12      14      16      18      20
	3       6       9       12      15      18      21      24      27      30
	4       8       12      16      20      24      28      32      36      40
	5       10      15      20      25      30      35      40      45      50
	6       12      18      24      30      36      42      48      54      60
	7       14      21      28      35      42      49      56      63      70
	8       16      24      32      40      48      56      64      72      80
	9       18      27      36      45      54      63      72      81      90
	10      20      30      40      50      60      70      80      90      100

## Съкратена таблица за умножение в "долнотриъгълен вид" (multTableLower)

Напишете програма, която по дадено естествено число N принтира съкратена таблица за умножение в "долноотриъгълен вид" до N.

**Пример:**

Вход: 

	10

Изход:

	1
	2       4
	3       6       9
	4       8       12      16
	5       10      15      20      25
	6       12      18      24      30      36
	7       14      21      28      35      42      49
	8       16      24      32      40      48      56      64
	9       18      27      36      45      54      63      72      81
	10      20      30      40      50      60      70      80      90      100
	

## Съкратена таблица за умножение в "горнотриъгълен вид" (multTableUpper)

Напишете програма, която по дадено естествено число N принтира съкратена таблица за умножение в "горнотриъгълен вид" до N.

**Пример:**

Вход: 

	10

Изход:

	1       2       3       4       5       6       7       8       9       10
		4       6       8       10      12      14      16      18      20
			9       12      15      18      21      24      27      30
				16      20      24      28      32      36      40
					25      30      35      40      45      50
						36      42      48      54      60
							49      56      63      70
								64      72      80
									81      90
										100

# Символни низове

## ASCII

Изпишете ASCII таблицата до 128-мия символ.

## Азбука

Изкарайте на екрана всички малки букви от английската азбука.

## Размер на низ

Напишете функция, която по даден низ определя броя символи в него без терминиращата нула.

## Копиране на низ

Напишете функция, която приема два низа и копира първия във втория.

## Конкатениране на низ

Напишете функция, която приема два низа и залепя на края на първия копие на втория

## Сравняване на два низа

Напишете функция, която сравнява лексикографски два низа. Ако първия е преди втория, функцията връща число, по-малко от нула. Ако втория е преди първия - връща число по-голямо от 0. Ако низовете са еднакви - връща 0.

## Коректни скоби

По даден низ от отварящи и затварящи скоби определете дали това е валидна комбинация, т.е. дали всяка затваряща си има отваряща и дали затваряща скоба не идва преди отваряща.

**Примери:**

Вход:

	()()(())

Изход:

	YES

Вход:

	)(()

Изход:

	NO

## Палиндром

Напишете функция, която проверява дали един низ е палиндром.

**Примери:**

Вход: 

	abba

Изход:

	YES

Вход:

	traicho

Изход:

	NO

## Намерете подниз

Дадени са два низа. Проверете дали единия низ се съдържа в другия и ако да, на коя позиция започва. Ако го няма, изведете за позиция -1;