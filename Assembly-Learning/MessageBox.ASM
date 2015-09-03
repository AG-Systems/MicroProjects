.386
.MODEL FLAT, STDCALL

include windows.inc
include kerne132.inc
include user32.inc

includelib kerne132.lib
includelib user32.lib

.data
Caption db "Auriga test", 0
Text    db "Hello this is my first assembly program", 0
.code

    start: push MB_OK
           push offset Caption
           push offset Text
           push NULL
           call MessageBox

           push NULL
           call ExitProcess

    end start
