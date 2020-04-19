# 4 Pliki

## 4.2.5 Letters: Zliczanie liter - bitcoin

Napisz program **letters**, który czyta ze standardowego wejścia znaki do napotkania końca pliku, a
następnie wypisuje na standardowe wyjście liczby wystąpień kolejnych liter pośród wpisanych znaków.
Program nie rozróżnia wielkich i małych liter oraz pomija wszelkie inne znaki. Program załącza tylko
pliki nagłówkowe **cctype**, **iostream** i **vector**.

### Przykładowe wykonanie
```
In: Lorem ipsum dolor sit amet!
Out: 1 0 0 1 2 0 0 0 2 0 0 2 3 0 3 1 0 2 2 2 1 0 0 0 0 0
```

## 4.2.9 Numerator: Numerowanie linii - bitcoin

Napisz program **numerator**, który przyjmuje jako argumenty wywołania nazwy dwóch plików tekstowych
i przepisuje zawartość pierwszego pliku do drugiego dopisując na początku każdej linii jej kolejny numer
poczynając od jednego. Program załącza tylko plik nagłówkowy **fstream**.

### Przykładowy plik wejściowy input.txt
```
Ala ma kota.

To kot Ali.
```

### Przykładowe wywołanie
```
Linux: ./numerator input.txt output.txt
Windows: numerator.exe input.txt output.txt
```

### Przykładowy plik wyjściowy output.txt
```
1 Ala ma kota.
2
3 To kot Ali.
```

## 4.2.11 Caesar: Szyfr Cezara - bitcoin

Kodowanie wiadomości tekstowej szyfrem Cezara z przesunięciem *n* polega na zastąpieniu każdej litery
inną, znajdującą się w alfabecie *n* pozycji dalej. Przesunięcie *n* może być dodatnie lub ujemne, przy
czym przyjmujemy, że za literą *z* wypada litera *a*, zaś przed literą *a* wypada litera *z*. Małe litery są
kodowane jako małe, a duże jako duże. Inne znaki nie są szyfrowane. Napisz program **caesar**, który
przyjmuje jako argumenty wywołania przesunięcie oraz nazwy dwóch plików tekstowych i przepisuje
zawartość pierwszego pliku do drugiego kodując ją szyfrem Cezara z zadanym przesunięciem. Program
załącza tylko pliki nagłówkowe **cstdlib** i **fstream**.

### Przykładowy plik wejściowy input.txt
```
Bwf Dbftbs!
Wfoj, wjej, wjdj!
```

### Przykładowe wywołanie
```
Linux: ./caesar -1 input.txt output.txt
Windows: caesar.exe -1 input.txt output.txt
```

### Przykładowy plik wyjściowy output.txt
```
Ave Caesar!
Veni, vidi, vici!
```