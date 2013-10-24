;File:      Conditional Print by validating Number
;Description: --> Part 1
;Author(s):   --> Kyle Avrett
;Date:        --> 23 October 2013

; ********************** BEGIN RESERVED SECTION ********************** 
; You may initialize values here (i.e., change the value of a .FILL
; statement), but you may *not* add or remove instructions or perform
; any edit which changes the address of a label in this section
	
               .ORIG x3000       	; DO NOT change any code before label DATA_END
               BR MAIN         		; jump to beginning of code

DATA_BEGIN     .FILL xFFFF      	; start of provided variables

; ********************** INPUT/OUTPUT VARIABLES ********************** 
; vars used by MAIN program
Input               .BLKW         1     ; Input variable

DATA_END       .FILL xFFFF      ; end of provided variables

; ********************** END RESERVED SECTION ********************** 
;---------you may add more variables or code below this line --------
MESSAGE1 .STRINGZ "HELLO CS270"
MESSAGE2 .STRINGZ "GOODBYE CS270"

;;Start of Function MAIN

MAIN            LD R4, Input		;Load Input Value

		;;Complete the code
		;;All you have to do is to check input, branch and print appropriate message
		BRnp MESSAGE_1	; non zero

		LEA R0, MESSAGE1
		BRnzp END

MESSAGE_1	LEA R0, MESSAGE2


END		PUTS
		HALT                    ;Program complete
                .END









