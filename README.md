# psp-pandora-battery-for-arduino BaryonSweeper

Эмулятор сервисной батареи пандоры, написаный под ардуино. В качестве контроллера подойдёт Атмега 168/328. 

Левый переключатель отвечает за включение аккумулятор. Второй за переключение режима (обычный/сервисный). Кнопка нужна для перезагрузки микроконтроллера. При включении или перезагрузке на кнопку пандора проинформирует о типе выбранного режима в зависимости от положения переключателя (если при старте светодиод режима мигнёт 3 раза, значит аккумулятор работает в сервисном редиме, если загорелся без мигания, тогда работа идёт в обычном режиме).

Поддерживаемые модели:
PSP-1000 	Все модели
PSP-2000 	Все модели
PSP-3000 	8C, 8D, 9A, 9B и некоторые 9C и 9D, так же любой код, начинающийся с 0 или 1

Все ключи были обновлены на основе этого проекта https://github.com/zecoxao/pysweeper Там же можно следить за поддерживаемыми моделями, которые будут обновляться и в этом проекте.

Для изготовления понадоятся следующие детали:

1) Микроконтролеер atmega 168 или 328 в dip исполнении
2) Три светодиода 3мм
3) микросхема К561ЛА7 или любой аналог
4) Одна кнопка на 4 ноги
5) Два dip переключателя
6) Кварц на 16 Mhz
7) Два конденстора на 18-22pF
8) Три резистора на 10 кОм
9) Три резистора на 150 ом
10) Один резистор на 200 ом
11) Штырёвый разъйм на 1x4 пина
12) Разъём как на родном psp АКБ
13) Любой акб от старого телефона

Источник https://www.pspx.ru/forum/showpost.php?p=1229948
