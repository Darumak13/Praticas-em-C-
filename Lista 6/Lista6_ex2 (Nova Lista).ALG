Algoritmo "Lista6_ex2"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Calcule a m�dia dos pre�os dos produtos do vetor
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/10/2023
   Var
      arrayPreco: vetor[1..5] de real
      i: inteiro
      somaPreco, Media: real

   Inicio
      para i de 1 ate 5 faca
         escreva("Informe os pre�os dos produtos: ")
         leia(arrayPreco[i])
         escreval("")
         somaPreco:= somaPreco + arrayPreco[i]
      fimpara
      
      Media <- somaPreco/5
      
      escreva("M�dia do pre�os dos produtos: R$",Media)


Fimalgoritmo