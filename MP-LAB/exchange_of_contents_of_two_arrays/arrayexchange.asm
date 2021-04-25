.model small
.data
list1 db 10h,20h,30h,40h,50h
list2 db 11h,22h,33h,44h,55h

.code
mov ax,@data
mov dx,ax

lea si,list1
lea di,list2

mov cl,05h
;loop defination
back: mov al,[si]
      xchg al,[di]
      mov [si],al

      inc si
      inc di
      loop back

      ;to verify the output
      lea si,list1
      lea di,list2
      mov bl,[si]
      mov bh,[di]

      mov ah,4ch
      int 21h
      end

                                                         
