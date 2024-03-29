/* token ids */
declare tok$eof literally '0';
declare tok$ident literally '2';
declare tok$number literally '3';
declare tok$string literally '4';
declare tok$unknown literally '0ffh';

/* special characters correspond to their ascii codes: 40..47, 58..64 */
declare tok$leq literally '10';
declare tok$geq literally '11';
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
declare kw$dword literally '213';
declare kw$else literally '214';
declare kw$enable literally '215';
declare kw$end literally '216';
declare kw$eof literally '217';
declare kw$external literally '218';
declare kw$go literally '219';
declare kw$goto literally '220';
declare kw$halt literally '221';
declare kw$if literally '222';
declare kw$initial literally '223';
declare kw$integer literally '224';
declare kw$interrupt literally '225';
declare kw$label literally '226';
declare kw$literally literally '227';
declare kw$minus literally '228';
declare kw$mod literally '229';
declare kw$not literally '230';
declare kw$or literally '231';
declare kw$plus literally '232';
declare kw$pointer literally '233';
declare kw$procedure literally '234';
declare kw$public literally '235';
declare kw$real literally '236';
declare kw$reentrant literally '237';
declare kw$return literally '238';
declare kw$selector literally '239';
declare kw$structure literally '240';
declare kw$then literally '241';
declare kw$to literally '242';
declare kw$while literally '243';
declare kw$word literally '244';
declare kw$xor literally '245';


/*** Parser non-terminals ***/

/* parser: declarations */
declare ntm$decl literally '300';

/* parser: statements */
declare ntm$ass literally '310';

/* parser: expressions */
declare ntm$expr literally '320';
declare ntm$ar$expr literally '330';
declare ntm$ar$tail literally '340';
declare ntm$term literally '350';
declare ntm$term$tail literally '360';
declare ntm$factor literally '370';

