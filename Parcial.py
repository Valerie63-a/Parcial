# le pedimos al usuario que ponga un valor para k y ponemos que es float porque puede usar decimales
k= float(input("Por favor ingresa un valor para k: "))
# evaluamos el valor de k y clasificamos el tipo de material
if k<0.1:
    print("Aislante termico")
elif 0.1 <= k<1: 
    print("Baja conductividad")
elif 1 <= k<100: 
    print("Buen conductor")
else: 
    print("Excelente conductor")