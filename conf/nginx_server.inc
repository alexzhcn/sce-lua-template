location /hello {
	content_by_lua_file /opt/src/app/hello.lua;
}
location /hellosce{
	content_by_lua_file /opt/src/app/hellosce.lua;
}
location / {
	content_by_lua_file /opt/src/app/hellosce.lua;
}
