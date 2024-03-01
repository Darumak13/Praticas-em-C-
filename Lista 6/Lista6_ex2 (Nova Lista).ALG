Algoritmo "Lista6_ex2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Calcule a média dos preços dos produtos do vetor
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/10/2023
   Var
      arrayPreco: vetor[1..5] de real
      i: inteiro
      somaPreco, Media: real

   Inicio
      para i de 1 ate 5 faca
         escreva("Informe os preços dos produtos: ")
         leia(arrayPreco[i])
         escreval("")
         somaPreco:= somaPreco + arrayPreco[i]
      fimpara
      
      Media <- somaPreco/5
      
      escreva("Média do preços dos produtos: R$",Media)


Fimalgoritmo