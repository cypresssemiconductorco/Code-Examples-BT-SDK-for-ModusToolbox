/***************************************************************************//**
* File Name: cycfg_bt.h
* Version: 1.1
*
* Description:
* Bluetooth Configurator configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 123
*
********************************************************************************
* Copyright 2019, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CYCFG_BT_H)
#define CYCFG_BT_H

/*
BLE_CONFIG_START
<?xml version="1.0"?>
<Configuration major="1" minor="1" device="20x19">
    <Profiles>
        <Profile name="GATT">
            <ProfileRoles>
                <ProfileRole type="Server">
                    <ProfileRoleProperties>
                        <Property id="Name" value="Server"/>
                    </ProfileRoleProperties>
                    <Services>
                        <Service type="org.bluetooth.service.generic_access">
                            <ServiceProperties>
                                <Property id="EntityID" value="{2af797df-3d94-4f98-9573-bf708df6f0e6}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.gap.device_name">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Name"/>
                                                <Property id="Value" value="low_power_20819"/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="15"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.gap.appearance">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category"/>
                                                <Property id="EnumValue" value="0"/>
                                                <Property id="Format" value="f_16bit"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                        <Service type="org.bluetooth.service.generic_attribute">
                            <ServiceProperties>
                                <Property id="EntityID" value="{90577c19-4e6e-4578-834f-33784d6e1217}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics/>
                        </Service>
                        <Service type="org.bluetooth.service.battery_service">
                            <ServiceProperties>
                                <Property id="EntityID" value="{0c8ada30-b2b8-4a3b-bdc9-ded1e0282256}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.battery_level">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Level"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_uint8"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors>
                                        <Descriptor type="org.bluetooth.descriptor.gatt.client_characteristic_configuration">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Properties"/>
                                                        <Property id="Value" value=""/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                    <BitField>
                                                        <Property id="BitValue" value="0"/>
                                                        <Property id="BitValue" value="0"/>
                                                    </BitField>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Write"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                            <Permission>
                                                <Property id="Read" value="true"/>
                                                <Property id="ReadAuthenticated" value="false"/>
                                                <Property id="VariableLength" value="false"/>
                                                <Property id="Write" value="true"/>
                                                <Property id="WriteNoResponse" value="false"/>
                                                <Property id="WriteAuthenticated" value="false"/>
                                                <Property id="WriteReliable" value="false"/>
                                            </Permission>
                                        </Descriptor>
                                    </Descriptors>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                    </Services>
                </ProfileRole>
            </ProfileRoles>
        </Profile>
    </Profiles>
</Configuration>
BLE_CONFIG_END
*/

#endif /* CYCFG_BT_H */

/* [] END OF FILE */
