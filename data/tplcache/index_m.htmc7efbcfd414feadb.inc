<?php
$z[0]=Array("global","",103,131);
$z[0][4]=array();
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",198,224);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",277,307);
$z[2][4]=array();
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",344,371);
$z[3][4]=array();
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("include","",899,938);
$z[4][4]=array();
$z[4][4]['filename']="header_m.htm";
$z[5]=Array("arclist","\r\n        <li class=\"list-item\">\r\n          <div class=\"image-container\"> <img src=\"[field:picname/]\" alt=\"\"> </div>\r\n          <div class=\"title\"></div>\r\n        </li>\r\n     ",1079,1303);
$z[5][4]=array();
$z[5][4]['typeid']="25";
$z[5][4]['row']="3";
$z[6]=Array("channelartlist","\r\n  <section class=\"widget widget-textblock \">\r\n    <div class=\"widget-header\">\r\n      <h2>{dede:field name='typename'/}</h2>\r\n    </div>\r\n    <div class=\"widget-body\">{dede:sql sql='Select content from dede_arctype where id=19'}[field:content function='cn_substr(html2text(@me),260)'/] {/dede:sql} ...</div>\r\n    <div class=\"widget-footer\"> <a class=\"more\" href=\"list.php?tid={dede:field name='id'/}\"><i class=\"icon\"></i>更多</a> </div>\r\n  </section>\r\n  ",1357,1871);
$z[6][4]=array();
$z[6][4]['typeid']="19,0";
$z[7]=Array("channelartlist","\r\n  <section class=\"widget widget-imagelist \">\r\n    <div class=\"widget-header\">\r\n      <h2>{dede:field name='typename'/}</h2>\r\n    </div>\r\n    <div class=\"widget-body\">\r\n      <ul class=\"list\">\r\n      {dede:arclist titlelen='40' row='8'} \r\n        <li class=\"list-item\"> <a href=\"view.php?aid=[field:id/]\">\r\n          <div class=\"image-container\"> <img src=\"[field:picname/]\" alt=\"[field:title/]\"> </div>\r\n          <div class=\"title\">[field:title/]</div>\r\n          </a> </li>\r\n      {/dede:arclist}    \r\n      </ul>\r\n    </div>\r\n    <div class=\"widget-footer\"> <a class=\"more\" href=\"list.php?tid={dede:field name='id'/}\"><i class=\"icon\"></i>更多</a> </div>\r\n  </section>\r\n  ",1876,2610);
$z[7][4]=array();
$z[7][4]['typeid']="1,0";
$z[8]=Array("channelartlist","\r\n  <section class=\"widget widget-textlist \">\r\n    <div class=\"widget-header\">\r\n      <h2>{dede:field name='typename'/}</h2>\r\n    </div>\r\n    <div class=\"widget-body\">\r\n      <ul class=\"list\">\r\n      {dede:arclist titlelen='40' row='4'} \r\n        <li class=\"list-item\"><a href=\"view.php?aid=[field:id/]\"><span class=\"title\">[field:title/]</span>\r\n          <time class=\"pub-date\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</time>\r\n          </a></li>\r\n      {/dede:arclist}    \r\n      </ul>\r\n    </div>\r\n    <div class=\"widget-footer\"> <a class=\"more\" href=\"list.php?tid={dede:field name='id'/}\"><i class=\"icon\"></i>更多</a> </div>\r\n  </section>\r\n  ",2615,3328);
$z[8][4]=array();
$z[8][4]['typeid']="15,0";
$z[9]=Array("include","",3339,3378);
$z[9][4]=array();
$z[9][4]['filename']="footer_m.htm";

?>