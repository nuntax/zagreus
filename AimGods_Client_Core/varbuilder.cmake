# varbuilder.cmake
function(varbuilder BASE_NAME OUTPUT_FILES)
    # Define the extensions
    set(EXTENSIONS
        _classes.hpp
        _functions.cpp
        _parameters.hpp
        _structs.hpp
    )

    # Temporary list to hold new files
    set(temp_files)

    # Loop through each extension and create the full filename
    foreach(EXTENSION ${EXTENSIONS})
        list(APPEND temp_files "${SDKDIR}/${BASE_NAME}${EXTENSION}")
    endforeach()

    # Append the new files to the existing OUTPUT_FILES variable in the parent scope
    list(APPEND ${OUTPUT_FILES} ${temp_files})
    set(${OUTPUT_FILES} ${${OUTPUT_FILES}} PARENT_SCOPE)
endfunction()
