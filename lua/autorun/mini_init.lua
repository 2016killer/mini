if CLIENT then
    local modulename = 'mini'

    if not util.IsBinaryModuleInstalled(modulename) then
        ErrorNoHalt('未检测到模块')
        return
    end

    local success, err = pcall(function() require(modulename) end)
    if not success then
        ErrorNoHalt(err)
    	return
    end

end