### 1. Какие шаблоны называются вариативными?

Шаблон называется вариативным, если он может принимать неограниченное количество аргументов шаблона (параметров).


### 2. Как можно обработать по очереди все параметры пакета?

1) с помощью рекурсии 

```c++

template<typename T, typename... Types>     // Основная функция
void print_first_realization(T first_argument, Types... arguments) {
    print_first_realization(first_argument);
    print_first_realization(arguments...);
}

/////////////////////////////////////////

template<typename T>        // Функция-условие остановки рекурсии
void print_first_realization(T first_argument) {
std::cout << first_argument << ' ';
}
```

2) c помощью цикла (добавляем ключевое слово constexpr)

```c++
template<typename T, typename... Types>         //if constexpr
void print_second_realization(T first_argument, Types... arguments) {
    std::cout << first_argument << ' ';
    if constexpr(sizeof...(arguments) > 0) {
        print_second_realization(arguments...);
    }
}

```

3) с помощью выражений свертки 

```c++
template<typename T>        //Разделитель. Используем разделитель, чтобы значения грамотно выводились. Пишется в паблике.
class SeparatorAdder {
public:
    explicit SeparatorAdder(T& argument) : argument(argument) {}

    friend std::ostream& operator<<(std::ostream& os, const SeparatorAdder& wrapper) {
        return os << wrapper.argument << ' ';
    }
    
/////////////////////////////////////////

template<typename... Types>         //Выражение свертки. Пишется в привате
void print(Types... arguments) {
    (std::cout << ... << SeparatorAdder(arguments));
}

```

### 3.  Как узнать количество аргументов в пакете?

С помощью оператора __sizeof__.


### 4. Какие выражения свёртки вы знаете?


Напишем данные выражения только для оператора +, но это также распространяется и на другие операторы (*, \, - и тд)

```c++
1) ... + args <=> (((arg1 + arg2) + arg3) + arg4)
2) args + ... <=> (arg1 + (arg2 + (arg3 + arg4)))
3) special_arg + ... + args <=> ((special_arg + arg1) + arg2) + arg3
4) args + ... + special_arg <=> arg1 + (arg2 + (arg3 + special_arg))
```


### 5. Как реализован статический полиморфизм? Динамический полиморфизм?

Статический полиморфизм -- через шаблоны

Динамический полиморфизм -- через наследование (как когда писали фигуры)
