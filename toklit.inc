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
    declare kw$address literally '200';
    declare kw$and literally '201';
    declare kw$at literally '202';
    declare kw$based literally '203';
    declare kw$by literally '204';
    declare kw$byte literally '205';
    declare kw$call literally '206';
    declare kw$case literally '207';
    declare kw$cause literally '208'; /* causeinterrupt */
    declare kw$data literally '209';
    declare kw$declare literally '210';
    declare kw$disable literally '211';
    declare kw$do literally '212';
    declare kw$end literally '240';

