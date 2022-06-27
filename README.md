# ProyectoSIN-811

[![Padlock-keyboard-key-1-800x440.jpg](https://diariodeinformatico.es/wp-content/uploads/2021/12/Padlock-keyboard-key-1-800x440.jpg "Padlock-keyboard-key-1-800x440.jpg")](https://diariodeinformatico.es/ "Padlock-keyboard-key-1-800x440.jpg")

### Instalación
- Para el microcontrolador:
Se debe de tener instalado IDE ARDUINO para poder editar o grabar el programa en el microcontrolador.
Para añadir la nueva placa y el IDE la reconozca se debe agregar. (http://digistump.com/package_digistump_index.json). En Archivo>Preferencias>Gestor de Url's Adicionales de Tarjetas.
Seguidamente instalar los drivers del mismo antes de conectarlo por primera vez al ordenador. Drivers: [Aqui](https://github.com/LilyGO/DigiSpark-ATtiny85-driver-install "Aqui")
- En el IDE Arduino:
Instalar la libreria DigiKeyboard desde su [repositorio](https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h "aqui") en github o bien descargando la carpeta DigikeyboardFr, comprimiendola en .zip para añadir desde el IDE; yendo a Programa>Incluir LIbreria>Añadir Libreria .zip y seleccionando donde se encuentre el archivo comprimido.
Para el funcionamiento:
Descargar los archivos .ino del repositorio; abrir proyectoFinalSIN, conectar el microcontrolador al ordenador y revisar que sea reconocido. Presionar el boton verificar y si no hay errores subir, desconectando el dispositivo al finalizar la subida del programa. Para probar el funcionamiento conectar un almacenamiento externo al ordenador si el dispositivo con el codigo no lo tiene incorporado, y conectar el dispositivo nuevamente. 

### Documentación
- De las librerias utilizadas se encuentra [aqui](https://github.com/digistump/DigisparkArduinoIntegration/tree/master/libraries/DigisparkKeyboard "aqui")

- Del proyecto realizado en el semestre primero de 2022, se encuentra en la siguiente direccion, [aqui](https://drive.google.com/drive/folders/1PTtY17HBvjcda1ccLiezPppuM--ydhAB?usp=sharing "aqui"). Para poder descargar o visualizar el documento se debe de contar con una cuenta gmail, asi consultar y ver el proceso de elaboracion, como detalles del proyecto a un nivel mas especifico.
### Funcionamiento
Se podrá visualizar un funcionamiento automatico del dispositivo al conectarse por el puerto USB del ordenador victima, primeramente copiando una carpeta en especifico detallada en el codigo, al almacenamiento externo encontrado y al final eliminandola del ordenador victima. Luego interrumpiendo el servicio normal de una url especifica en todos los navegadores del ordenador victima, para poner como pagina principal en el navegador chrome, la pagina duplicada o la que se requiera. Programa elaborado para dar a conocer a un dispositivo electronico utilizado como herramienta para Phishing.
*Consideraciones*:
El programa es especifico y estan comentadas las variables utilizadas para reconocer el archivo o carpeta a buscar, como la url que se quiere modificar y mostrar como pagina principal. Siendo escalable todo esto, para nuevas caracteristicas similares que se le puedan dar al dispositivo.

### Detalles
Editado
June 27, 2022
