.model small
display macro msg
 lea dx,msg
 mov ah,09h
 int 21h
endm

.data
timestr db 020h dup(?)
msg1 db "Current Time::$"

.code
start: mov ax,@data
      mov ds,ax

      mov ah,00h   ;clear the screen
      mov al,03h
      int 10h

  ;set a particular location for dynamic clock
ag: mov bh,00h
    mov dh,01h
    mov dl,01h
    mov ah,02h
    int 10h

    mov si,offset timestr
    mov ah,2ch             ;interrupt for getting system time
    int 21h

    mov al,ch
    aam               ;convert to unpacked bcd format
    add ax,3030h
    mov [si],ah
    inc si
    mov [si],al
    inc si
    mov [si],byte ptr ':'
    inc si

    mov al,cl
    aam
    add ax,3030h
    mov [si],ah
    inc si
    mov [si],al
    inc si
    mov [si],byte ptr ':'
    inc si

    mov al,dh
    aam
    add ax,3030h
    mov [si],ah
    inc si
    mov [si],al
    inc si
    mov [si],byte ptr '$'

    display msg1
    display timestr

    mov ah,0bh
    int 21h
    cmp al,00h
    je ag

final: mov ah,4ch
      int 21h
end start
