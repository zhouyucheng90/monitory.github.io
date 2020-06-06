window.onload = function(){
	$(function(){
		$('form').submit(function(){
			
			var isPhone = /^([0-9]{3,4}-)?[0-9]{7,8}$/;
    		var isMob=/^(((13[0-9]{1})|(15[0-9]{1})|(18[0-9]{1})|(17[0-9]{1}))+\d{8})$/;
    		var isEmail = /^([a-zA-Z0-9]+[_|\_|\.]?)*[a-zA-Z0-9]+@([a-zA-Z0-9]+[_|\_|\.]?)*[a-zA-Z0-9]+\.[a-zA-Z]{2,3}$/;
            var name = $('input').eq(0).val();
    		var phone = $('input').eq(1).val();
    		var email = $('input').eq(3).val();
    		if( $.trim(name) == '' ){
                alert('请输入姓名');
                $('input').eq(0).focus();
                return false;
            }
            if( $.trim(phone) == '' ){
                alert('请输入电话');
                $('input').eq(1).focus();
                return false;
            }
            if( isPhone.test( phone ) || isMob.test( phone ) ){
            }else{
                alert('请输入正确的电话号码');
                $('input').eq(1).focus();
                return false;
            }            
            if( $.trim(email) != '' ){
    			if( !isEmail.test(  email ) ){
	    			alert('请输入正确的邮箱地址');
                    $('input').eq(3).focus();
					return false;
	    		}
    		}    		
		})
	})
}