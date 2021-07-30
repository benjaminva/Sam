# TC1033 Proyecto Demo
Este proyecto demo está hecho para servir de ejemplo a los alumnos de Pensamiento Orientado a Objetos TC1033. Con la intención de que vean el alcance que se espera al final de la materia de su proyecto y que tengan ejemplos de estilo a seguir. 

## Contexto

Una empresa que tiene que pagar impuestos, por lo que genera una estructura de clases para poder manejar a sus tipos de empleados y facilitar su contabilidad. 
Los empleados están separados en 3 tipos: asalariados, empleados por hora y practicantes. Solo los asalariados y los empleados por hora generan impuestos. 
Los practicantes, aunque tambien cobran, no generan impuestos ya que su pago se registra como una beca.

## Funcionalidad
El programa solo permite altas de nuevos empleados  y el cálculo de diferentes tipos de pagos de nóminas:
  
  asalariados
  empleados
  practicantes
  
Consta de un menu con las opciones iniciales y corre sobre consola.

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con:
    "g++ empleado.h empresa.h main.cpp"
    
 correr en linux:
      "/a.out"
      
 correr en windows:
      "a.exe"
      
## Correcciones

para este programa se relizaron las siguientes correcciones:
  
  1 se arregló es estilo en la biblioteca empresa.h
  
  2 se agregó casos de prueba en al función crea_asalariados en la línea 70 en el archivo empresa.h
  
  3 se corrigió la herencia en el Diagrama de clases y se agregó composición entre la clase empleado y la clase empresa
