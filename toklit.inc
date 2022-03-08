    /* token ids */
    declare tok$eof literally '0';
    declare tok$ident literally '2';
    declare tok$number literally '3';
    declare tok$string literally '4';
    declare tok$unknown literally '0ffh';

    /* special characters correspond to their ascii codes: 40..47, 58..64 */
    declare tok$plus literally '''+''';
    declare tok$minus literally '''-''';
    declare tok$star literally '''*''';
    declare tok$slash literally '''/''';
    declare tok$lower literally '''<''';
    declare tok$greater literally '''>''';
    declare tok$equals literally '''=''';
    declare tok$colon literally ''':''';
    declare tok$semicolon literally ''';''';
    declare tok$par$op literally '''(''';
    declare tok$par$cl literally ''')''';
    declare tok$at literally '''@''';

    /* keywords: in range [200..250] */
    declare tok$declare literally '200';
    declare tok$byte literally '220';
    declare tok$do literally '230';
    declare tok$end literally '240';

