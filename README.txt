--------
Overview
--------
This Lybrari module imports your book collection from Calibre, exposing them
to Drupal as a custom entity type.

------------
Installation
------------
 1) Extract the lybrari module into sites/all/modules/contrib or your preferred
    modules directory, then enable at admin/modules.

-------
History
-------
This project was originally forked from the 7.x-1.0 version of the
calibre_server module found on Drupal.org.

 ****
You must create a shortcut called calibre_server to the Calibre library in 
/sites/default/files directory.

Suppose the Calibre library is located in the directory /home/carlos/calibre, 
in /sites/default/files directory you would type:
ln - s /home/carlos/calibre calibre_server

Permissions of all directories and files of the library must be modified to be 
accessible by the web server:
chown www-data /home/carlos/calibre -R
chmod 775 /home/carlos/calibre-R
 ****


-- INSTALLATION --


The Calibre Server module will have created a menu that is available in blocks 
administration page (/admin/structure/block), which provides links to views 
that allow you to navigate through the e-books collection.

Finally, you must modify the configuration file settings.php
usually located at /sites/default/settings.php or path
/sites/YourSiteName/settings.php and add the array of connection to calibre
database:

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'your drupal database',
      'username' => 'your drupal database user',
      'password' => 'your drupal database key',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
    'calibre' => 
  array (
    'default' =>
    array(
      'driver' => 'sqlite',
      'database' => '/calibre library path/metadata.db',
    ),
  ),
);



-- INSTALACIÓN --

Calibre Server se instala de manera estándard: se descomprime en la carpteta 
elegida (normalmente /sites/all/modules) y se activa en la página de administración 
de módulos (/admin/modules).

Se deberá crear un acceso directo, denominado calibre_server, a la biblioteca 
de Calibre en el directorio /sites/default/files.

Supongamos que la biblioteca de Calibre está situada en el directorio 
/home/carlos/calibre, situados en el directorio /sites/default/files se teclearía:
ln - s /home/carlos/calibre calibre_server

Deben modificarse los permisos de todos los directorios y ficheros de la biblioteca 
para que sean accesibles por el servidor web:
chown www-data /home/carlos/calibre -R
chmod 775 /home/carlos/calibre -R

El módulo Calibre Server habrá creado un menú que está disponible en la página de 
administración de bloques (/admin/structure/block), que proporciona los enlaces 
a las vistas que permiten navegar a través de la colección de libros.

Por último, hay que modificar el fichero de configuración settings.php
situado normalmente en /sites/default/settings.php o en la ruta
/sites/yoursitename/settings.php y añadir el array de conexión a la base de datos
de calibre:

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'base de datos de drupal',
      'username' => 'usuario de la base de datos de drupal',
      'password' => 'contraseña de la base de datos de drupal',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
    'calibre' => 
  array (
    'default' =>
    array(
      'driver' => 'sqlite',
      'database' => '/ruta de la biblioteca de calibre/metadata.db',
    ),
  ),
);


-- REQUERIMENTS --

Support for sqlite. It is also to be installed php5-sqlite


-- REQUISITOS --

Soporte para sqlite. Ha de instalarse también php5-sqlite














