.686P
.model flat, c
.code

; (x^5 + 2 * (^x2 – 4) + x) / x^3

calc		proc x:dword
			mov eax, x
			imul eax
			sub eax, 4
			imul eax, 2
			mov ebx, eax
			mov eax, x
			imul eax
			imul eax
			imul x
			add eax, ebx
			add eax, x
			cdq
			idiv x
			cdq
			idiv x
			cdq
			idiv x
			

		ret
calc		endp
end