# 5 Łańcuchy

## 5.2.1 Initials: Inicjały - bitcoin

Napisz funkcję **initials**, która przyjmuje stałą referencję łańcucha imion oraz nazwisk pewnej osoby i
zwraca łańcuch jej inicjałów, czyli pierwszych liter kolejnych członów. Funkcja powinna być przystosowana
do użycia w przykładowym programie poniżej. Funkcja korzysta tylko z plików nagłówkowych **cctype** i **string**.

### Przykładowy program
```
int main() {
std::cout << initials("John Fitzgerald Kennedy") << std::endl;
std::cout << initials(std::string("andy warhol")) << std::endl; }
```

### Wykonanie
```
Out: JFK
Out: aw
```

## 5.2.8 Sort: Sortowanie słów - bitcoin

Napisz program **sort**, który czyta ze standardowego wejścia słowa do napotkania końca pliku i wypisuje
je na standardowe wyjście w kolejności alfabetycznej. Program załącza tylko pliki nagłówkowe **iostream**,
**string** i **vector**.

### Przykładowe wykonanie
```
In: a long time ago in a galaxy far far away
Out: a a ago away far far galaxy in long time
```

## 5.2.13 Colloquium: Wyniki kolokwium - bitcoin

Wyniki kolokwium zapisane są w pliku tekstowym jak poniżej. W pierwszej linii podana jest maksymalna
punktacja za poszczególne zadania. Każda następna linia zawiera jednoczłonowe nazwisko studenta oraz
zdobyte przez niego punkty za kolejne zadania. Liczba zadań ani studentów nie jest z góry znana. Napisz
program **colloquium**, który przyjmuje jako argument wywołania nazwę takiego pliku i wypisuje na stan-
dardowe wyjście łączne wyniki każdego studenta oraz średnie wyniki z każdego zadania jak w przykładzie
poniżej. Program załącza tylko pliki nagłówkowe **fstream**, **iostream**, **sstream**, **string** i **vector**.

### Przykładowy plik wejściowy input.txt
```
                 5.0 5.0 5.0
Einstein         1.5 3.0 0.5
Chopin           0.5 3.5 2.5
Sklodowska-Curie 5.0 5.0 5.0
```

### Przykładowe wykonanie
```
Linux: ./colloquium input.txt
Windows: colloquium.exe input.txt

Out: Einstein 5
Out: Chopin 6.5
Out: Sklodowska-Curie 15

Out: 1 2.33333
Out: 2 3.83333
Out: 3 2.66667
```