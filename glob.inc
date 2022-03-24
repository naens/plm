/* dos library */
$nolist
$include (c:\intel\lib\doslibs.inc)
$list

/* types */
declare uint literally 'address';
declare uint16 literally 'word';
declare boolean literally 'byte';
declare true literally '1';
declare false literally '0';

/* characters */
declare space literally '20h';
declare tab literally '9h';
declare lf literally '0ah';
declare cr literally '0dh';
declare eol literally '24h';
declare quote literally '27h';

