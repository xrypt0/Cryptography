require 'digest/md5'

#This code belongs the Xrypt0

puts "Please Enter The Message You Want To Encrypt :"
message = gets.chomp

def encryption(msg)
	encrypted_message = Digest::MD5.hexdigest("#{msg}")
	puts "Encrypted Message: #{encrypted_message} \n \n"
	message_length = "#{msg}".length
	#puts message_length ---------If You Activate This Line, It Directly Prints The Number Of Characters Of The Text To Be Encrypted. 
	puts "#{message_length}-Character Text Is Encrypted With MD5 As 32 Characters. \n \nFor More : https://github.com/xrypt0"
end


encryption message
